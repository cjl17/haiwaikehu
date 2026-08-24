#!/bin/bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env 

source $SCRIPTS_ROOT/common/common.sh
# log_write_day camera_run
common_main camera_run

# 启动相机
AUTOWARE_ROBOBUS_WORKSPACE=$1
if [ -z "$AUTOWARE_ROBOBUS_WORKSPACE" ]; then
  AUTOWARE_ROBOBUS_WORKSPACE=autoware-robobus.dev-master
else
  # 如果不为空，检查是否为正确的工作空间
  if [ $AUTOWARE_ROBOBUS_WORKSPACE == "autoware-robobus.dev-master" ]; then
    AUTOWARE_ROBOBUS_WORKSPACE=autoware-robobus.dev-master
  else
    AUTOWARE_ROBOBUS_WORKSPACE=autoware-robobus.master
  fi
fi

log_info "工作空间: $AUTOWARE_ROBOBUS_WORKSPACE"
source ~/pix/robobus/$AUTOWARE_ROBOBUS_WORKSPACE/install/setup.bash

echo "$AUTOPILOT_VERSION - $TMUX_NAME"
# ros2 launch $SCRIPT_DIR/gst_camera.launch.py
ros2 launch $SCRIPT_DIR/gst_camera_composable.launch.py
