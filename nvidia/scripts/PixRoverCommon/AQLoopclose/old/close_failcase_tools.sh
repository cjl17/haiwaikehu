#!/bin/bash
source /opt/pix/pix.env
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

set -euo pipefail


# timeout 3s ros2 service call /failcase_data/pause_all std_srvs/srv/Trigger
$SCRIPTS_ROOT/common/tmux_common/main.py close perception_recoder
$SCRIPTS_ROOT/common/tmux_common/main.py close planning_control_recoder
sleep 2
$SCRIPTS_ROOT/common/tmux_common/main.py force_close perception_recoder
$SCRIPTS_ROOT/common/tmux_common/main.py force_close planning_control_recoder
sleep 2
$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/AQLoopclose/umount_failcase_data.sh