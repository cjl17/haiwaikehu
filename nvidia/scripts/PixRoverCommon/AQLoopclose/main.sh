#!/bin/bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)
 
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
log_info "提示🔔" "failcase-tools - 已启动 ✅"

AUTOWARE_ROBOBUS_WORKSPACE=${1:-autoware-robobus.dev-master}
$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh $SCRIPT_DIR/failcase_tools.sh failcase_tools $AUTOWARE_ROBOBUS_WORKSPACE