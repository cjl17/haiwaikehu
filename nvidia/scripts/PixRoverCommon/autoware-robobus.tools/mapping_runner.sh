#!/bin/bash
SCRIPT_DIR=$SCRIPTS_ROOT/PixRoverCommon/scripts

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh
common_main mapping_runner

export ROS_DOMAIN_ID=11
export DISPLAY=:0
export XDG_RUNTIME_DIR=/run/user/1000
export DBUS_SESSION_BUS_ADDRESS=unix:path=/run/user/1000/bus

cd ~/pix/robobus/autoware-robobus.tools/

log_info "工作空间: autoware-robobus.tools"
source ~/pix/robobus/autoware-robobus.tools/install/setup.bash
ros2 launch $SCRIPTS_ROOT/PixRoverCommon/autoware-robobus.tools/mapping_runner.launch.py
