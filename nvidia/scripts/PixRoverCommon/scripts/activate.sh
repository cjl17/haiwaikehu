#!/bin/bash
SCRIPT_DIR=$SCRIPTS_ROOT/PixRoverCommon/scripts

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh
common_main activate_program

log_info "提示🔔" "socket_can激活程序 - 已启动 ✅"

# 循环检查 ros2 节点
while true; do
  if ros2 node list 2>/dev/null | grep -qx '/socket_can0_receiver'; then
    echo "/socket_can0_receiver found, exiting loop: -------------------"
    ros2 node list 2>/dev/null  | grep '/socket_can0_receiver'
    echo "--------------------------------------------------------------"
    sleep 10
    break
  else
    echo "Waiting for /socket_can0_receiver..."
    sleep 1
  fi
done

ros2 lifecycle set /socket_can0_receiver configure
sleep 1
ros2 lifecycle set /socket_can0_receiver activate

ros2 lifecycle set /socket_can0_sender configure
sleep 1
ros2 lifecycle set /socket_can0_sender activate

ros2 lifecycle set /socket_can1_receiver configure
sleep 1
ros2 lifecycle set /socket_can1_receiver activate

ros2 lifecycle set /socket_can1_sender configure
sleep 1
ros2 lifecycle set /socket_can1_sender activate


