#!/bin/bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh
common_main remote_control

log_info "提示🔔" "远程驾驶程序 - 已启动 ✅"

$HOME/pix/ccpixbot_eview_mrrion/scrips/remote_control.sh


