#!/bin/bash
# 获取里程和当前时间保存到 ~/pix/.config/vehicle_年月日.info

source ~/pix/robobus/autoware-robobus.dev-master/install/setup.bash

DATE=$(date '+%Y%m%d')
OUTPUT_FILE=~/pix/.config/vehicle_${DATE}.info

# 文件已存在则跳过
if [ -f "$OUTPUT_FILE" ]; then
    exit 0
fi

mkdir -p ~/pix/.config

TIME=$(date '+%Y%m%d%H%M%S')
MILEAGE=""
while [ -z "$MILEAGE" ]; do
    MILEAGE=$(timeout 5 ros2 topic echo /app/cloud_control_platform/vehicle_info --field tm --once 2>/dev/null | grep -oE '^[0-9]+')
    [ -z "$MILEAGE" ] && sleep 2
done

echo "time: ${TIME}" > "$OUTPUT_FILE"
echo "tm: ${MILEAGE}" >> "$OUTPUT_FILE"
