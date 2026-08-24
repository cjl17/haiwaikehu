import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
import cv2
import sys
import numpy as np

class RGBAImageDisplay(Node):
    def __init__(self, topic_name: str):
        super().__init__('rgba_image_display')
        
        # 创建订阅者
        self.subscription = self.create_subscription(
            Image,
            topic_name,
            self.image_callback,
            10)
        
        # 初始化参数
        self.latest_image = None

        # 创建OpenCV窗口
        cv2.namedWindow('RGBA Display', cv2.WINDOW_NORMAL)

    def image_callback(self, msg):
        """RGBA图像处理回调"""
        try:
            # 转换原始数据为numpy数组
            np_arr = np.frombuffer(msg.data, dtype=np.uint8)
            
            # 根据编码类型处理图像
            if msg.encoding == 'rgba8':
                # 重塑为HWC格式
                img_rgba = np_arr.reshape(msg.height, msg.width, 4)
                # 转换为BGRA格式（OpenCV默认颜色顺序）
                self.latest_image = cv2.cvtColor(img_rgba, cv2.COLOR_RGBA2BGRA)
            elif msg.encoding == 'bgra8':
                # 直接使用BGRA格式
                self.latest_image = np_arr.reshape(msg.height, msg.width, 4)
            else:
                self.get_logger().warn(f"不支持的编码格式: {msg.encoding}")
                return
            
            # 接收到图像立即显示
            if self.latest_image is not None:
                cv2.imshow('RGBA Display', self.latest_image)
                # 处理按键事件（1ms超时）
                cv2.waitKey(1)
                
        except Exception as e:
            self.get_logger().error(f"图像处理错误: {str(e)}")
            self.latest_image = None

def main(args=None):
    topic_name = '/electronic_rearview_mirror/camera1/camera_rgba_image'
    if(len(sys.argv)==2):
        topic_name = sys.argv[1]   # 其他命令行参数
    rclpy.init(args=args)    

    node = RGBAImageDisplay(topic_name)
    
    try:
        # 直接使用spin保持节点运行
        rclpy.spin(node)
                
    except KeyboardInterrupt:
        pass
    finally:
        cv2.destroyAllWindows()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()