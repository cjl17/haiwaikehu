#!/usr/bin/env bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env 

source $SCRIPTS_ROOT/common/common.sh
common_main cam_containe_restart

AUTOWARE_ROBOBUS_WORKSPACE=$1

function restart_cameras() 
{
  echo "Restarting camera container..."

  "$SCRIPTS_ROOT/common/tmux_common/main.py" close camera_run
  sleep 2
  "$SCRIPTS_ROOT/common/tmux_common/main.py" force_close camera_run
  sleep 1
  "$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh" "$SCRIPTS_ROOT/PixRoverCommon/electronic_rearview_mirror/camera_run.sh" camera_run $AUTOWARE_ROBOBUS_WORKSPACE
}


if [[ "$AUTOPILOT_VERSION" != "PixRover1.6" && "$TMUX_NAME" == "ORIN1" ]]; then
  restart_cameras
fi


if [[ "$AUTOPILOT_VERSION" == "PixRover1.6" ]]; then
  restart_cameras
fi
