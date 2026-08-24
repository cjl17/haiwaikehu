#!/bin/bash
source /opt/pix/pix.env

sudo $SCRIPTS_ROOT/PixRoverCommon/AQLoopclose/auto_mount_failcase_data.sh
if [ $? -eq 0 ]; then
  echo "Success" "磁盘修复成功"
else
  echo "Error" "磁盘修复失败"
fi