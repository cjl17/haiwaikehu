#!/usr/bin/env bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env 

source $SCRIPTS_ROOT/common/common.sh
common_main cam_containe_restart

COMPONENTS="/rear_camera_node
/front_left_camera_node
/front_right_camera_node
/rear_left_camera_node
/rear_right_camera_node
/front_camera_node"


all_cameras_up() {
  present="$(ros2 node list | grep camera_node || true)"
  for n in $COMPONENTS; do
    echo "$present" | grep -Fx "$n" >/dev/null || return 1
  done
  return 0
}

restart_cameras() {
  echo "Restarting camera container..."

  "$SCRIPTS_ROOT/common/tmux_common/main.py" close camera_run
  sleep 2
  "$SCRIPTS_ROOT/common/tmux_common/main.py" force_close camera_run

  "$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh" "$SCRIPTS_ROOT/PixRoverCommon/electronic_rearview_mirror/camera_run.sh"
}

sleep 60

while true; do
  all_cameras_up || restart_cameras
  sleep 5
done

