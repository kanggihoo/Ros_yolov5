from bboxes.srv import ImageFirstPickBox      # CHANGE
import sys
import rclpy
from rclpy.node import Node
import cv2
from cv_bridge import CvBridge


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('srv_client')
        self.cli = self.create_client(ImageFirstPickBox, 'box_srv')       # CHANGE
        while not self.cli.wait_for_service(timeout_sec=1.0): # 1초 간격으로 service server동작 중인지 확인
            self.get_logger().info('service not available, waiting again...')
        self.req = ImageFirstPickBox.Request() # Service Request 정의  
        self.br = CvBridge()

    def send_request(self):
        future = self.cli.call_async(self.req)
        print("receive_request!!")
        return future


def main(args=None):
    rclpy.init(args=args)

    minimal_client = MinimalClientAsync()
    future = minimal_client.send_request() 

    while rclpy.ok():
        rclpy.spin_once(minimal_client)
        if future.done(): # 잘 전달 받은 경우 
            try:
                response = future.result() # service 결과값 저장(response )
                image1 =  minimal_client.br.imgmsg_to_cv2(response.color_image)
                image2 =  minimal_client.br.imgmsg_to_cv2(response.depth_image)

                cv2.imshow("image1" , image1)
                cv2.imshow("image2" , image2)
                cv2.waitKey(5000)
            # except Exception as e:
            #     minimal_client.get_logger().info(
            #         'Service call failed %r' % (e,))
            finally:
                minimal_client.get_logger().info(
                    f'Result of response x: {response.x}  y: {response.y}  z:{response.z}')
                    
                cv2.destroyAllWindows()
            break

    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()