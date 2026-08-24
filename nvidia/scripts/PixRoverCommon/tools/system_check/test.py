#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from rclpy.qos import QoSProfile, DurabilityPolicy, ReliabilityPolicy, HistoryPolicy

class EmptyPublisher(Node):
    def __init__(self):
        super().__init__("empty_publisher")

        # 设置 QoS 确保节点退出后仍能看到话题
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_LAST,
            depth=1
        )

        # 创建发布者，但不实际发布数据
        self.publisher_ = self.create_publisher(String, "/empty_topic", qos_profile)

        # 打印确认信息
        self.get_logger().info("Empty Publisher Created, but no data will be published.")

def main(args=None):
    rclpy.init(args=args)
    node = EmptyPublisher()
    rclpy.spin(node)

if __name__ == "__main__":
    main()
