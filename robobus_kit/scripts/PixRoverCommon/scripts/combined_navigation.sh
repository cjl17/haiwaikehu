#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env 
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

source $SCRIPTS_ROOT/common/common.sh
common_main combined_navigation

log_info "提示🔔" "combined_navigation 已启动成功 ✅"

gnss_receiver=$COMBINED_NAVIGATION_VERSION
if [ "$gnss_receiver" != "chc" ] && [ "$gnss_receiver" != "eaora" ] && [ "$gnss_receiver" != "pbox" ]; then
  gnss_receiver="chc"
fi

# 默认启动master
AUTOWARE_ROBOBUS_WORKSPACE=${1:-autoware-robobus.dev-master}
if [ -z "$AUTOWARE_ROBOBUS_WORKSPACE" ]; then
  echo 请输入 AUTOWARE_ROBOBUS_WORKSPACE
  exit 1
fi

# 检查是否为正确的工作空间
if [ $AUTOWARE_ROBOBUS_WORKSPACE != "autoware-robobus.dev-master" ]  && [ "$AUTOWARE_ROBOBUS_WORKSPACE" != "autoware-robobus.master" ]  && [ "$AUTOWARE_ROBOBUS_WORKSPACE" != "autoware" ]; then
  echo 请输入 autoware-robobus.dev-master / autoware-robobus.master
  exit 1
fi

log_info "工作空间: $AUTOWARE_ROBOBUS_WORKSPACE"

source ~/pix/robobus/$AUTOWARE_ROBOBUS_WORKSPACE/install/setup.bash
ros2 launch $SCRIPTS_ROOT/launch/combined_navigation.launch.xml gnss_receiver:=$gnss_receiver
