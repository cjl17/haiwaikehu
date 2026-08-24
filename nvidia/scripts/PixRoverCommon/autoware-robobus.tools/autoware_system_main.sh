#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env 
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

source $SCRIPTS_ROOT/common/common.sh
common_main autoware_system_main

log_info "提示🔔" "autoware_system_main 已启动成功 ✅"


log_info "工作空间: autoware-robobus.dev-master"
# exit 0
source ~/pix/robobus/autoware-robobus.dev-master/install/setup.bash
ros2 launch autoware_system_monitor system_monitor.launch.py
