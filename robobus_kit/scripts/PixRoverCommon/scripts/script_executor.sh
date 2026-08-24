#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)


source $SCRIPTS_ROOT/common/common.sh
common_main script_executor

log_info "提示🔔" "脚本执行器 - 已启动 ✅"
source ~/pix/robobus/autoware-robobus.dev-master/install/setup.bash

python3 $AUTONOMOUS_OPS_PLATFORM_ROOT/ros_scripts_node/main.py
