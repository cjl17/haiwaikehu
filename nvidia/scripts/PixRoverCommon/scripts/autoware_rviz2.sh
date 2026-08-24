#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)


source $SCRIPTS_ROOT/common/common.sh
common_main Rviz2

# 默认启动master
AUTOWARE_ROBOBUS_WORKSPACE=$(cat $PIX_CFG_PATH/current_autoware_version)
if [ -z "$AUTOWARE_ROBOBUS_WORKSPACE" ]; then
  echo 请输入 AUTOWARE_ROBOBUS_WORKSPACE
  exit 1
fi

# 检查是否为正确的工作空间
if [ $AUTOWARE_ROBOBUS_WORKSPACE != "autoware-robobus.dev-master" ]  && [ "$AUTOWARE_ROBOBUS_WORKSPACE" != "autoware-robobus.master" ] && [ "$AUTOWARE_ROBOBUS_WORKSPACE" != "autoware" ]; then
  echo 请输入 autoware-robobus.dev-master / autoware-robobus.master
  exit 1
fi

log_info "工作空间: $AUTOWARE_ROBOBUS_WORKSPACE"
if [ "$AUTOWARE_ROBOBUS_WORKSPACE" = "autoware-robobus.master" ] ; then
  export AUTOWARE_VERSION=autoware_1.0
else
  export AUTOWARE_VERSION=autoware_2.0
fi

log_info "提示🔔" "rviz - 已启动 ✅"
source ~/pix/robobus/$AUTOWARE_ROBOBUS_WORKSPACE/install/setup.bash

export DISPLAY=:0
export XDG_RUNTIME_DIR=/run/user/1000
export DBUS_SESSION_BUS_ADDRESS=unix:path=/run/user/1000/bus
ros2 launch $SCRIPTS_ROOT/launch/autoware_rviz.launch.xml rviz_config:=$SCRIPTS_ROOT/rviz/$AUTOWARE_VERSION.rviz