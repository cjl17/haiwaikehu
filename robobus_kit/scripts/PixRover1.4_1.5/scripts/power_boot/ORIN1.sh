#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh

SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

echo "✅ 启动时间同步 ===================="
sudo $SCRIPTS_ROOT/PixRoverCommon/scripts/ptp_gps_sync_1.4.sh
# 确保GPS时间同步完毕后
# while true; do  
#   if [ -f "/tmp/gps_ok" ]; then    
#     echo "✅ 检测到文件：/tmp/gps_ok, 确保退出循环"    
#     rm /tmp/gps_ok   
#     break  
#   else    
#     echo "⏳ 等待GPS时间同步完成..."   
#     sleep 2  
#   fi
# done
# 因为lidar单播模式，不会主动请求其他主机的master间同步，所以这里ping一下
ping 192.168.1.120 -w 3
ping 192.168.1.121 -w 3
ping 192.168.1.124 -w 3

$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/script_executor.sh


sudo $SCRIPTS_ROOT/PixRoverCommon/scripts/nvidia_setup.sh
if [ $? -eq 0 ]; then
  echo "Success" "nvidia_setup.sh 执行成功"
else
  echo "Error" "nvidia_setup.sh 执行失败"
  exit 1  # 根据需要退出脚本
fi

echo "✅ 启动 camera_init"
$SCRIPTS_ROOT/PixRover1.4_1.5/scripts/eaora06/activate_eaora06.sh
if [ $? -eq 0 ]; then
  echo "Success" "activate_eaora06.sh 执行成功"
else
  echo "Error" "activate_eaora06.sh 执行失败"
  exit 1  # 根据需要退出脚本
fi

sudo $SCRIPTS_ROOT/PixRoverCommon/electronic_rearview_mirror/gpio/activate_audc_gpio.sh
if [ $? -eq 0 ]; then
  echo "Success" "activate_audc_gpio.sh 执行成功"
else
  echo "Error" "activate_audc_gpio.sh 执行失败"
  exit 1  # 根据需要退出脚本
fi

$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/electronic_rearview_mirror/camera_run.sh

# 检查服务是否没有启动
sudo $SCRIPTS_ROOT/tools/safe/check_and_start_services.sh gpsd.socket