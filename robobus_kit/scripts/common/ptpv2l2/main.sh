#!/bin/bash
source /opt/pix/pix.env

SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

# 一旦脚本中的任意一个命令返回非 0（失败），整个脚本立刻退出。
source $SCRIPTS_ROOT/common/error_handler.sh

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

# 安装ptp相关工具
function deploy_install(){
  # 查看安装ptp4l
  if [ -e "/usr/local/sbin/ptp4l" ]; then
    return 0
  fi

  mkdir -p $PIX_PATH/dependent/
  unzip -oq $PIX_PATH/deployment_src/src_zip/linuxptp.zip -d $PIX_PATH/dependent/
  cd $PIX_PATH/dependent/linuxptp
  sudo make
  sudo make install

  if [ -e "/usr/local/sbin/ptp4l" ]; then
    echo ptp 安装成功
  fi

}

deploy_install

# 卸载服务 -------------------------------------------------------------------------------------
function close_service(){
  name=$1
  # 列出所有以 ptp4l_master 开头的 service 文件（已安装的服务）
  services=$(systemctl list-units --type=service --plain | awk "\$1 ~ /^${name}/ {print \$1}")

  for svc in $services; do
    log_info "Stopping and disabling $svc ..."
    # 停止服务（如果正在运行）
    sudo systemctl stop "$svc" 2>/dev/null
    # 禁用服务（防止开机自启）
    sudo systemctl disable "$svc"
    # 尝试查找服务文件路径（通常在 /etc/systemd/system 或 /lib/systemd/system）
    svc_path=$(systemctl show -p FragmentPath "$svc" | cut -d= -f2)

    if [ -n "$svc_path" ] && [ -f "$svc_path" ]; then
      log_info "Deleting service file: $svc_path"
      sudo rm -f "$svc_path"
      sudo systemctl daemon-reload
      sudo systemctl reset-failed
    else
      log_info "Service file not found for $svc or it is a built-in service."
    fi

  done
}

# 部署服务 - 写入服务 -------------------------------------------------------------------------------------
function write_ptp_master_software(){
sudo cat << EOF > /etc/systemd/system/ptp_master_software@.service
[Unit]
Description=PTP4L Precision Time Protocol on %i
After=network.target

[Service]
ExecStart=/usr/local/sbin/ptp4l -i %i -f /etc/ptp4l/ptp_master.cfg -S -m -l6
Restart=always

[Install]
WantedBy=multi-user.target

EOF

  log_info 添加服务 - write_ptp_master_software
  log_info "拷贝 /etc/ptp4l/ptp_master.cfg"
  # install -D 会自动创建中间目录，比 mkdir + cp 更安全。
  sudo install -D $SCRIPT_DIR/ptp_master.cfg /etc/ptp4l/ptp_master.cfg

  sudo systemctl daemon-reload
}

function write_ptp_master(){
sudo cat << EOF > /etc/systemd/system/ptp_master@.service
[Unit]
Description=PTP4L Precision Time Protocol on %i
After=network.target

[Service]
ExecStart=/usr/local/sbin/ptp4l -i %i -f /etc/ptp4l/ptp_master.cfg -H -m -l6
Restart=always

[Install]
WantedBy=multi-user.target

EOF

  log_info 添加服务 - ptp_master
  log_info "拷贝 /etc/ptp4l/ptp_master.cfg"
  # install -D 会自动创建中间目录，比 mkdir + cp 更安全。
  sudo install -D $SCRIPT_DIR/ptp_master.cfg /etc/ptp4l/ptp_master.cfg

  sudo systemctl daemon-reload
}

function write_ptp_slave(){
sudo cat << EOF > /etc/systemd/system/ptp_slave@.service
[Unit]
Description=PTP4L Precision Time Protocol on %i
After=network.target

[Service]
ExecStart=/usr/local/sbin/ptp4l -i %i -f /etc/ptp4l/ptp_slave.cfg -H -m -l6
Restart=always

[Install]
WantedBy=multi-user.target

EOF
  log_info 添加服务 - ptp_slave

  log_info "拷贝/etc/ptp4l/ptp_slave.cfg"
  sudo install -D  $SCRIPT_DIR/ptp_slave.cfg /etc/ptp4l/ptp_slave.cfg
  sudo systemctl daemon-reload
}

function write_phc2sys(){
# 编写ptp硬件授时文件 - 启动服务文件
sudo cat << 'EOF' > /etc/systemd/system/phc2sys@.service
[Unit]
Description=Precision Time Protocol (PTP) service
After=network-online.target

[Service]
Type=simple
ExecStartPre=/opt/pix/wait_phc_ready.sh %i
ExecStart=/usr/local/sbin/phc2sys -s %i -c CLOCK_REALTIME -w -O 0 --step_threshold 5.0 -m -l6
ExecStop=/usr/bin/pkill -f ptp4l
Restart=always
RestartSec=5

[Install]
WantedBy=multi-user.target network-online.target

EOF
  log_info 添加服务 - phc2sys
  sudo systemctl daemon-reload

}

function write_sys2phc(){
# 编写ptp硬件授时文件 - 启动服务文件
sudo cat << EOF > /etc/systemd/system/sys2phc@.service
[Unit]
Description=Precision Time Protocol (PTP) service
After=network-online.target

[Service]
Type=simple
ExecStart=/usr/local/sbin/phc2sys -s CLOCK_REALTIME -c %i -w -O 0 --step_threshold 5.0 -m -l6
ExecStop=/usr/bin/pkill -f ptp4l
Restart=always
RestartSec=5

[Install]
WantedBy=multi-user.target network-online.target

EOF
  log_info 添加服务 - sys2phc
  sudo systemctl daemon-reload

}

# 部署服务 - 添加启动服务 -------------------------------------------------------------------------------------

function load_server(){
  server_name=$1   # ptp_master ptp_slave phc2sys sys2phc
  net_name=$2

  log_info "加载服务: $server_name@$net_name"

  eval "write_$server_name"

  sudo systemctl start $server_name@$net_name.service

  log_info "请允许指令检查: 
  sudo systemctl status $server_name@$net_name.service"

}

# 主函数入口 --------------------------------------------------------------------------------

# 显示帮助信息
function help() {
echo """
Usage: main.sh <first_level> <second_level> <third_level>

参数介绍:
1. first_level: 
  - remove : 移除所有ptp和phc相关的服务
  - install: 部署相关的ptp和phc
2. second_level:
  - ptp_master
  - ptp_slave
  - phc2sys
  - sys2phc
3. third_level:
   网卡名称
"""
}


first_level=$1
if [ "$first_level" != "remove" ] && [ "$first_level" != "install" ] ; then
  log_error 错误参数1: $first_level
  help
  exit 1
fi

if [ "$first_level" == "remove" ]; then
  close_service ptp4l_master@
  close_service ptp4l_slave@

  close_service ptp_master@
  close_service ptp_slave@
  close_service phc2sys@
  close_service sys2phc@
  sudo systemctl disable chrony.service 
  sudo systemctl stop chrony.service 
  sudo systemctl disable gpsd.socket || true
  sudo systemctl stop gpsd.socket  || true
  sudo systemctl disable gpsd.service  || true
  sudo systemctl stop gpsd.service  || true
  exit 0
fi

second_level=$2
third_level=$3
if [ "$#" -ne 3 ]; then
  echo "❌ 错误：必须传入 3 个参数"
  echo "✅ 用法: main.sh <参数1> <参数2> <参数3>"
  help 
  exit 1
fi

if [ "$second_level" != "ptp_master" ] && [ "$second_level" != "ptp_master_software" ] && [ "$second_level" != "ptp_slave" ] && [ "$second_level" != "phc2sys" ] && [ "$second_level" != "sys2phc" ]; then
  log_error 错误参数: $second_level
  help
  exit 1
fi

if ip link show "$third_level" &>/dev/null; then
  echo "✅ 网卡 $third_level 存在"
else
  echo "❌ 网卡 $third_level 不存在"
  exit 1
fi

log_info 部署部署相关的ptp和phc
load_server $second_level $third_level
