#!/usr/bin/env bash
source /opt/pix/pix.env

[[ $TMUX_NAME != ORIN1 ]] && exit 0

CONTAINER="/nvenc_multicam_container"
COMPONENTS="/rear_camera_node
/front_3mm_camera_node
/rear_3mm_camera_node
/front_left_camera_node
/front_right_camera_node
/rear_left_camera_node
/rear_right_camera_node
/front_camera_node"

unload_unwanted() {
  ros2 component list | awk '
    /^\/nvenc_multicam_container$/ {incont=1; next}
    # if another container header appears, stop capturing
    /^\// && $0!~"^/nvenc_multicam_container$" {incont=0}
    incont && $1 ~ /^[0-9]+$/ {print $1, $2}
    incont && !NF {incont=0}
  ' | while read -r id name; do
    echo "$COMPONENTS" | grep -Fx "$name" >/dev/null || ros2 component unload "$CONTAINER" "$id"
  done
}

unload_unwanted



