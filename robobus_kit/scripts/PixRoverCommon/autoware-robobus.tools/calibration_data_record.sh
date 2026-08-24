#!/bin/bash
SCRIPT_DIR=$SCRIPTS_ROOT/PixRoverCommon/scripts

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh

source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh
common_main calibration_data_record

log_info "工作空间: autoware-robobus.dev-master"
source ~/pix/robobus/autoware-robobus.dev-master/install/setup.bash
ros2 launch $SCRIPTS_ROOT/PixRoverCommon/autoware-robobus.tools/calibration_data_record.launch.py
