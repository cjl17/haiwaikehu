#!/usr/bin/env python3
import os
import glob
import subprocess
from datetime import datetime

LOG_FILE = f"{os.getenv('HOME')}/system_check.log"
CAN_INTERFACE = "can0"
CHECK_INTERVAL = 2
PING_TIMEOUT = 3
CAN_TIMEOUT = 1  

NETWORK_ADDRESSES = [
    "192.168.1.120",
    "192.168.1.121",
    "192.168.1.122",
    "192.168.1.123",
    "192.168.1.124",
    "192.168.1.45",
    "192.168.1.102",
    "192.168.1.104",
    "192.168.2.102",
    "192.168.3.104",
    "www.baidu.com"
]

ORIN_ADDRESSES = [
    "192.168.1.103",
    "192.168.1.104",
    "192.168.2.103",
    "www.baidu.com"
]

def clear_log():
    with open(LOG_FILE, "w") as log_file:
        pass  # 只打开，不写入内容

def log(message):
    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    with open(LOG_FILE, "a") as log_file:
        log_file.write(f"{message}\n")

def check_network(addresses):
    for ip in addresses:
        try:
            subprocess.check_call(["ping", "-c", "1", "-W", str(PING_TIMEOUT), ip], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            log(f"✅ 网络正常: {ip} 可达")
        except subprocess.CalledProcessError:
            log(f"❌ 网络异常: 无法访问 {ip}")

# 检查网口是否被协商成千兆
def check_network_speed():
    # 忽略的网口名称
    ignore_prefixes = {"lo", "docker", "veth", "br", "vir", "vmnet", "tailscale", "can"}

    print("检查所有有效网口的协商速率：")
    print("==============================")

    # 获取过滤后的网口列表
    interfaces = [
        os.path.basename(iface) 
        for iface in glob.glob("/sys/class/net/*")
        if not any(os.path.basename(iface).startswith(prefix) for prefix in ignore_prefixes)
    ]

    for iface in interfaces:
        speed_file = f"/sys/class/net/{iface}/speed"
        try:
            # 读取网口速率
            with open(speed_file, "r") as f:
                speed = int(f.read().strip())
            
            # 判断速率
            if speed < 1000:
                print(f"⚠️ 网口 {iface} 仅协商到 {speed}Mb/s")
            else:
                print(f"✅ 网口 {iface} 协商到 {speed}Mb/s")
        
        except FileNotFoundError:
            # 无法读取速率的网口（可能是没有连接）
            continue
        except ValueError:
            # 非数值速率（可能是虚拟网卡）
            continue

def check_can(can_interface):
    try:
        # 检查接口是否存在
        result = subprocess.run(
            ["ip", "link", "show", can_interface],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            check=False
        )

        if result.returncode != 0:
            log(f"❌ 接口 ({can_interface}) 不存在")
            return

        # 检查接口是否有数据
        result = subprocess.run(
            ["timeout", str(CAN_TIMEOUT), "candump", "-n", "1", can_interface],
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            check=False
        )

        if result.returncode == 0 and result.stdout.strip():
            log(f"✅ CAN 总线 ({can_interface}) 正常，有数据")
        else:
            log(f"⚠️ CAN 总线 ({can_interface}) 无数据")

    except FileNotFoundError as e:
        log(f"❌ 工具缺失 - 请确保 'candump' 已安装")
    except Exception as e:
        log(f"⚠️ 检查 CAN 总线 ({can_interface}) 失败 - 错误: {e}")

def topic_has_data(topic_name, timeout=5):
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
            log(f"❌ 话题 ({topic_name}) 不存在")
            return False

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
            log(f"✅ 话题 ({topic_name}) 有数据")
            return True
        else:
            log(f"❌ 话题 ({topic_name}) 无数据")
            return False

    except subprocess.TimeoutExpired:
        log(f"❌ 话题 ({topic_name}) 检查超时")
        return False
    except Exception as e:
        log(f"❌ 检查话题 ({topic_name}) 失败: {e}")
        return False


if __name__ == "__main__":
    clear_log()
    check_network(NETWORK_ADDRESSES)
    check_can(CAN_INTERFACE)
    check_network_speed()  
    # topic_has_data("/empty_topic", timeout=5)
