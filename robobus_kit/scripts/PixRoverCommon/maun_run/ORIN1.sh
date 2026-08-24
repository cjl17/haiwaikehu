#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)


AUTOWARE_ROBOBUS_WORKSPACE=$1
$SCRIPTS_ROOT/PixRoverCommon/electronic_rearview_mirror/camera_restart.sh $AUTOWARE_ROBOBUS_WORKSPACE

if [[ "$AUTOPILOT_VERSION" == "PixRover1.6" ]]; then
    $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/autoware_robobus_1.6.sh $AUTOWARE_ROBOBUS_WORKSPACE $AUTOWARE_ROBOBUS_WORKSPACE
    $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/robobus_display.sh
else
    $SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/autoware_robobus_orin1.sh $AUTOWARE_ROBOBUS_WORKSPACE $AUTOWARE_ROBOBUS_WORKSPACE
fi