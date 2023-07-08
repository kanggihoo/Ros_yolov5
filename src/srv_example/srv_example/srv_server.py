from bboxes.srv import ImageFirstPickBox  # CHANGE

import rclpy
from rclpy.node import Node
import cv2
from cv_bridge import CvBridge
from pathlib import Path
import sys
class MinimalService(Node):

    def __init__(self):
        super().__init__('srv_server')
        self.srv = self.create_service(ImageFirstPickBox, 'box_srv', self.add_three_ints_callback)        # CHANGE
        self.br = CvBridge()

        


        FILE = Path(__file__).resolve()
        ROOT = FILE.parents[0]
        image_path = ROOT / "images.jpg"
        self.image = cv2.imread(str(image_path))
    def add_three_ints_callback(self, request, response):
        response.color_image = self.br.cv2_to_imgmsg(self.image)                                   
        response.depth_image = self.br.cv2_to_imgmsg(self.image)                            

        response.success = True

        response.x = 0.1
        response.y = 1.2
        response.z = 0.2

               
        self.get_logger().info(f'response {response}') 

        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()