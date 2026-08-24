#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env 
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)


source $SCRIPTS_ROOT/common/common.sh
common_main ultrasonic_aeb

log_info "提示🔔" "ultrasonic_aeb已启动成功 ✅"

source ~/pix/robobus/autoware-robobus.dev-master/install/setup.bash
ros2 launch $SCRIPTS_ROOT/launch/ultrasonic_aeb.launch.xml
