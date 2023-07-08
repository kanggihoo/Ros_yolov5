# Import the necessary libraries
import rclpy # Python library for ROS 2
from rclpy.node import Node # Handles the creation of nodes
from sensor_msgs.msg import Image # Image is the message type
from cv_bridge import CvBridge # Package to convert between ROS and OpenCV Images
from bboxes.msg import FirstPickBox
import cv2 # OpenCV library
 
class ImageSubscriber(Node):
  def __init__(self):
    super().__init__('subscribe_image_first')
      
   
    self.subscription = self.create_subscription(
      FirstPickBox, 
      'first_pick', 
      self.listener_callback, 
      10)
    self.subscription # prevent unused variable warning
      
    # Used to convert between ROS and OpenCV images
    self.br = CvBridge()

  def listener_callback(self, data):
   
    
    image = self.br.imgmsg_to_cv2(data.color_image)
    
    # Display image
    cv2.imshow("result_image", image)
    if data.success is True:
        depth_image = self.br.imgmsg_to_cv2(data.depth_image)
        cv2.imshow("depth_image" , depth_image)
    self.get_logger().info("received data")
    self.get_logger().info("x : {} , y : {} , z : {} , angle : {} , id : {}".format(data.x , data.y , data.z , data.angle , data.class_id))
    cv2.waitKey(1)
  
def ros_main(args=None):
  
  rclpy.init(args=args)
  image_subscriber = ImageSubscriber()
  rclpy.spin(image_subscriber)
  image_subscriber.destroy_node()
  rclpy.shutdown()
  
if __name__ == '__main__':
  ros_main()
