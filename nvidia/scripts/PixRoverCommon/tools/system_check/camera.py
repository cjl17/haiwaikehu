#!/usr/bin/env python3

import subprocess
from datetime import datetime

LOG_FILE = "camera_check.log"
I2C_BUS = 2
I2C_ADDRESSES = ["0x14", "0x15", "0x16", "0x17", "0x10", "0x11", "0x12", "0x13"]
SN_REG_ADDR_HIGH = 0x01
SN_REG_ADDR_LOW = 0x20
SN_LENGTH = 32

def log(message):
    timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    with open(LOG_FILE, "a") as log_file:
        log_file.write(f"{timestamp} {message}\n")
    print(message)

def read_sn(bus, address, reg_high, reg_low, length):
    try:
        # 构建 i2ctransfer 命令
        cmd = ["i2ctransfer", "-y", str(bus), f"w2@{address}", f"{reg_high:#04x}", f"{reg_low:#04x}", f"r{length}"]
        result = subprocess.run(cmd, capture_output=True, check=True, text=True)
        
        # 过滤有效字符
        sn_clean = "".join([chr(byte) for byte in bytes.fromhex(result.stdout.strip()) if 0x20 <= byte <= 0x7E])
        
        # 返回有效 SN
        return sn_clean if sn_clean else None
    except subprocess.CalledProcessError as e:
        log(f"❌ 相机 ({address}) 启动失败, 无法读取 SN - 错误: {e}")
        return None

if __name__ == "__main__":
    log("[4.0] 检查相机 EEPROM SN...")
    
    for address in I2C_ADDRESSES:
        log(f"检查相机 ({address})...")
        
        # 读取 SN
        sn = read_sn(I2C_BUS, address, SN_REG_ADDR_HIGH, SN_REG_ADDR_LOW, SN_LENGTH)
        
        # 检查 SN 是否有效
        if sn:
            log(f"✅ 相机 ({address}) 启动成功, SN: {sn}")
        else:
            log(f"❌ 相机 ({address}) 启动失败, 无法读取 SN")
    
    log("=== 相机检查结束 ===")
