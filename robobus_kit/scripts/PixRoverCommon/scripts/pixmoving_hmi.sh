#!/bin/bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)
 
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env

source $SCRIPTS_ROOT/common/common.sh
common_main pixmoving_hmi

log_info "提示🔔" "中台程序 - 已启动 ✅"

# 默认启动master
AUTOWARE_ROBOBUS_WORKSPACE=${1:-autoware-robobus.dev-master}
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

source ~/pix/robobus/$AUTOWARE_ROBOBUS_WORKSPACE/install/setup.bash
ros2 launch $SCRIPTS_ROOT/launch/pixmoving_hmi.launch.xml \
  launch_system:=true \
  launch_other:=true 
