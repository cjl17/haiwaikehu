#!/usr/bin/env python3

import subprocess
import time
import rclpy
from rclpy.node import Node
from diagnostic_msgs.msg import DiagnosticStatus, DiagnosticArray
from rclpy.qos import QoSProfile, DurabilityPolicy, ReliabilityPolicy,HistoryPolicy

NETWORK_ADDRESSES = [
    "192.168.1.120",
    "192.168.1.121",
    "192.168.1.122",
    "192.168.1.123",
    "192.168.1.124",
    "192.168.1.45",
    "www.baidu.com"
]

ORIN_ADDRESSES = [
    "192.168.1.103",
    "192.168.1.104",
    "192.168.2.103",
    "www.baidu.com"
]

IPC_ADDRESSES = [
    "192.168.1.102",
    "192.168.1.104",
    "192.168.2.102",
    "192.168.3.104",
    "www.baidu.com"
]

CAN_INTERFACE = "can0"
PING_TIMEOUT = 3
CHECK_INTERVAL = 2
CAN_TIMEOUT = 3  # 设置 CAN 数据检查超时时间

class SystemChecker(Node):
    def __init__(self):
        super().__init__("system_checker")

        # 设置 QoS，确保即使节点退出，消息也能被缓存
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )

        # 创建 DiagnosticArray 发布者
        self.publisher_ = self.create_publisher(DiagnosticArray, "/system_diagnostics_ipc", qos_profile)

        # 立即执行检查
        self.run_checks()

        # 退出节点
        self.get_logger().info("系统检查完成")
        # self.destroy_node()
        # rclpy.shutdown()

    def run_checks(self):
        msg = DiagnosticArray()
        msg.header.stamp = self.get_clock().now().to_msg()

        # 检查网络
        msg.status.extend(self.check_network("Network", NETWORK_ADDRESSES))
        msg.status.extend(self.check_network("ORIN", ORIN_ADDRESSES))
        msg.status.extend(self.check_network("IPC", IPC_ADDRESSES))

        # 检查 CAN 总线
        msg.status.append(self.check_can(CAN_INTERFACE))

        # 检查 话题
        # msg.status.append(self.topic_has_data("/"))

        # 发布诊断信息
        self.publisher_.publish(msg)

    def check_network(self, group_name, addresses):
        statuses = []
        for ip in addresses:
            status = DiagnosticStatus()
            status.name = f"{group_name} - {ip}"
            status.hardware_id = ip
            try:
                subprocess.check_call(["ping", "-c", "1", "-W", str(PING_TIMEOUT), ip], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
                status.level = DiagnosticStatus.OK
                status.message = f"{ip} 可达"
                self.get_logger().info(f"✅ {group_name} - {ip} 可达")
            except subprocess.CalledProcessError:
                status.level = DiagnosticStatus.ERROR
                status.message = f"{ip} 无法访问"
                self.get_logger().warn(f"❌ {group_name} - {ip} 无法访问")
            statuses.append(status)
        return statuses

    def check_can(self, can_interface):
        status = DiagnosticStatus()
        status.name = f"CAN Bus - {can_interface}"
        status.hardware_id = can_interface
        try:
            # 使用 timeout 避免阻塞
            result = subprocess.run(
                ["timeout", str(CAN_TIMEOUT), "candump", "-n", "1", can_interface],
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                text=True,
                check=False
            )
            if result.returncode == 0:
                status.level = DiagnosticStatus.OK
                status.message = f"{can_interface} 正常，有数据"
                self.get_logger().info(f"✅ CAN 总线 ({can_interface}) 正常，有数据")
            else:
                status.level = DiagnosticStatus.ERROR
                status.message = f"{can_interface} 无数据或超时"
                self.get_logger().warn(f"❌ CAN 总线 ({can_interface}) 无数据或超时")
        except subprocess.CalledProcessError as e:
            status.level = DiagnosticStatus.ERROR
            status.message = f"{can_interface} 检查失败"
            self.get_logger().error(f"❌ CAN 总线 ({can_interface}) 检查失败 - 错误: {e}")

        return status

    def topic_has_data(self, topic_name, timeout=5):
        status = DiagnosticStatus()
        status.name = f"topic: {topic_name}"
        try:
            # 首先检查话题是否存在
            result = subprocess.run(
                ["ros2", "topic", "list"],
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                text=True,
                timeout=timeout
            )

            # 检查话题是否在列表中
            topics = result.stdout.strip().split("\n")
            if topic_name not in topics:
                status.level = DiagnosticStatus.ERROR
                status.message = f"话题 ({topic_name}) 不存在"
                self.get_logger().error(f"❌ 话题 ({topic_name}) 不存在")

            # 话题存在，再检查是否有数据
            result = subprocess.run(
                ["ros2", "topic", "echo", topic_name, "--once"],
                stdout=subprocess.PIPE,
                stderr=subprocess.PIPE,
                text=True,
                timeout=timeout
            )
            
            # 检查是否有输出数据
            if result.stdout.strip():
                status.level = DiagnosticStatus.OK
                status.message = f"话题 ({topic_name}) 有数据"
                self.get_logger().error(f"✅ 话题 ({topic_name}) 有数据")
            else:
                status.level = DiagnosticStatus.ERROR
                status.message = f"话题 ({topic_name}) 无数据"
                self.get_logger().error(f"❌ 话题 ({topic_name}) 无数据")

        except subprocess.TimeoutExpired:
            status.level = DiagnosticStatus.ERROR
            status.message = f"话题 ({topic_name}) 检查超时"
            self.get_logger().error(f"❌ 话题 ({topic_name}) 检查超时")
        except Exception as e:
            status.level = DiagnosticStatus.ERROR
            status.message = f"检查话题 ({topic_name}) 失败: {e}"
            self.get_logger().error(f"❌ 检查话题 ({topic_name}) 失败: {e}")
        return status

def main(args=None):
    rclpy.init(args=args)
    node = SystemChecker()
    rclpy.spin(node)

if __name__ == "__main__":
    main()
