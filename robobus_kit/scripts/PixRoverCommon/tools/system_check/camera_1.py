#!/usr/bin/env python3

import subprocess
import rclpy
from rclpy.node import Node
from diagnostic_msgs.msg import DiagnosticStatus, DiagnosticArray
from rclpy.qos import QoSProfile, DurabilityPolicy, ReliabilityPolicy

I2C_BUS = 2
I2C_ADDRESSES = ["0x14", "0x15", "0x16", "0x17", "0x10", "0x11", "0x12", "0x13"]
SN_REG_ADDR_HIGH = 0x01
SN_REG_ADDR_LOW = 0x20
SN_LENGTH = 32

class CameraChecker(Node):
    def __init__(self):
        super().__init__("camera_checker")

        # 设置 QoS，以确保即使节点退出，消息也能被缓存
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.TRANSIENT_LOCAL,
            depth=10
        )

        self.publisher_ = self.create_publisher(DiagnosticArray, "/camera_diagnostics", qos_profile)

        # 立即进行相机检查
        self.check_cameras()

        # 完成检查后立即退出
        self.get_logger().info("相机检查完成")
        # self.destroy_node()
        # rclpy.shutdown()

    def check_cameras(self):
        msg = DiagnosticArray()
        msg.header.stamp = self.get_clock().now().to_msg()
        
        for address in I2C_ADDRESSES:
            status = DiagnosticStatus()
            status.hardware_id = address
            status.name = f"Camera {address} Status"
            
            sn = self.read_sn(I2C_BUS, address, SN_REG_ADDR_HIGH, SN_REG_ADDR_LOW, SN_LENGTH)
            if sn:
                status.level = DiagnosticStatus.OK
                status.message = f"Camera {address} Active, SN: {sn}"
                status.values.append({"key": "SN", "value": sn})
                self.get_logger().info(f"✅ 相机 ({address}) 启动成功, SN: {sn}")
            else:
                status.level = DiagnosticStatus.ERROR
                status.message = f"Camera {address} Inactive"
                self.get_logger().warn(f"❌ 相机 ({address}) 启动失败, 无法读取 SN")
            
            msg.status.append(status)

        # 发布检查结果
        self.publisher_.publish(msg)

    def read_sn(self, bus, address, reg_high, reg_low, length):
        try:
            # 读取 EEPROM 序列号
            cmd = ["i2ctransfer", "-y", str(bus), f"w2@{address}", f"{reg_high:#04x}", f"{reg_low:#04x}", f"r{length}"]
            result = subprocess.run(cmd, capture_output=True, check=True, text=True)
            
            # 过滤有效字符
            sn_clean = "".join([chr(byte) for byte in bytes.fromhex(result.stdout.strip()) if 0x20 <= byte <= 0x7E])
            
            # 返回有效 SN
            return sn_clean if sn_clean else None
        except subprocess.CalledProcessError as e:
            self.get_logger().error(f"读取相机 ({address}) SN 失败 - 错误: {e}")
            return None

def main(args=None):
    rclpy.init(args=args)
    node = CameraChecker()
    rclpy.spin(node)

if __name__ == "__main__":
    main()
