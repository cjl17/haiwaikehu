#!/bin/bash
function log_info() {
  echo -e "\033[32m[INFO] $*\033[0m[\033[32m\u2714\033[0m]"
}
source /opt/pix/pix.env
# 车辆名称
export VEHICLE_NAME=$(hostname)-PixRover1.4_1.5
log_info "$VEHICLE_NAME"

source $SCRIPTS_ROOT/PixRover1.4_1.5/tools/setup.sh
export PIXMOVING_TMUX_CFG="$SCRIPTS_ROOT/PixRoverCommon/config/tmuxs.yaml"

export LIDAR_TYPE=robosense
export GNSS_TYPE=adcu
