#!/bin/bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env 
source $SCRIPTS_ROOT/common/common.sh
common_main gnss_initialization_positioning


log_info "提示🔔" "GNSS初始化定位程序 - 已启动 ✅"

source ~/pix/robobus/autoware-robobus.dev-master/install/setup.bash
ros2 service call /api/localization/initialize autoware_adapi_v1_msgs/srv/InitializeLocalization
