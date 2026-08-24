#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh  $SCRIPTS_ROOT/PixRoverCommon/scripts/autoware_rviz2.sh
