#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)


# 日志管理
source $SCRIPTS_ROOT/common/common.sh
mkdir -p "$HOME/pix/ros2log/$TMUX_NAME"
exec 2> $HOME/pix/ros2log/$TMUX_NAME/$(basename "$0" ".sh")_err.log
exec 1> $HOME/pix/ros2log/$TMUX_NAME/$(basename "$0" ".sh")_out.log
# 日志函数
function log_info() {
  echo -e "\033[32m[INFO] $*\033[0m[\033[32m\u2714\033[0m]"
}

function log_warning() {
  echo -e "\033[33m[WARNING] $*\033[0m[\033[33m⚠️\033[0m]"
}

function log_error() {
  echo -e "\033[31m[ERROR] $*\033[0m[\033[31m\xE2\x9C\x97\033[0m]"
}

function view_time(){
  if command -v ntpdate &>/dev/null; then
    log_info "ntpdate 已安装。"
  else
    log_warning "ntpdate 安装中..."
    sudo apt install ntpdate -y
  fi
  log_info 当前北京时间$(ntpdate -q cn.pool.ntp.org | grep adjust | awk '{print $1, $2, $3}')
  log_info 当前系统时间$(date +"%Y-%m-%d %H:%M:%S")
}

# IP=$(hostname -I | awk '{for(i=1;i<=NF;i++) if ($i ~ /^192\.168\.1\./) print $i}')
if [ "$TMUX_NAME" == "ORIN1" ]; then
  sleep 5

  log_info "启动ptp从时钟和phc同步"
  sudo systemctl start ptp_slave@eth3.service
  sudo systemctl start phc2sys@eth3.service

  log_info "启动ptp: $TMUX_NAME"
  sleep 5
  view_time 
elif [ "$TMUX_NAME" == "IPC" ]; then
  sleep 5

  log_info "启动ptp从时钟和phc同步"
  sudo systemctl start ptp_slave@eno1.service
  sudo systemctl start phc2sys@eno1.service

  log_info "启动ptp: $TMUX_NAME"
  sleep 5
  view_time 
else
  log_error "不是[ORIN1 | ORIN2 | IPC]"
  exit 1
fi
