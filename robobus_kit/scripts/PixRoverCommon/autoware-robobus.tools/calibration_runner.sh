#!/bin/bash
SCRIPT_DIR=$SCRIPTS_ROOT/PixRoverCommon/scripts

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh

source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh
common_main calibration_runner

export ROS_DOMAIN_ID=11
log_info "工作空间: autoware-robobus.tools"
source ~/pix/robobus/autoware-robobus.tools/install/setup.bash
ros2 launch $SCRIPTS_ROOT/PixRoverCommon/autoware-robobus.tools/calibration_runner.launch.py
