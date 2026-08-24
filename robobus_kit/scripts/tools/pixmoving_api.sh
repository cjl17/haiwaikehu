function log_info() {
  echo -e "\033[32m[INFO] $*\033[0m[\033[32m\u2714\033[0m]"
}

function log_warning() {
  echo -e "\033[33m[WARNING] $*\033[0m[\033[33m⚠️\033[0m]"
}

function log_error() {
  echo -e "\033[31m[ERROR] $*\033[0m[\033[31m\xE2\x9C\x97\033[0m]"
}

# --------------------------------------------------------------------------------------------------
function pixmoving_sync_map() {
  if [ "$TMUX_NAME" != "ORIN2" ]; then
    log_error "❌ 请在自驾工控机上运行"
    return 1
  fi

  read -p "是否同步map？(Y/N): " answer
  answer=$(echo "$answer" | tr 'a-z' 'A-Z')  # 转换为大写（防止小写 y）
  if [ "$answer" == "Y" ]; then
    echo "开始同步-map"
  elif [ "$answer" == "N" ]; then
    echo "取消同步-map"
    return 0
  else
    echo "输入无效，请输入 Y 或 N。"
    return 1
  fi

  rsync -av --delete --exclude 'pointcloud_map.pcd' --exclude 'pointcloud_map.pcd.2' ~/pix/map/main/ nvidia@192.168.1.102:~/pix/map/main
  rsync -av --delete --exclude 'pointcloud_map.pcd' --exclude 'pointcloud_map.pcd.2' ~/pix/map/main/ pc@192.168.1.104:~/pix/map/main
}

function pixmoving_sync_parameter() {
  if [ "$TMUX_NAME" == "ORIN1" ]; then
    local msg="从ORIN同步到IPC"
    local SRC="$HOME/pix/parameter/sensor_kit/robobus_sensor_kit_description/intrinsic_parameters"
    local DEST="ipc@192.168.1.103:~/pix/parameter/sensor_kit/robobus_sensor_kit_description/intrinsic_parameters"
  elif [ "$TMUX_NAME" == "ORIN2" ]; then
    local msg="从IPC同步到ORIN"
    local SRC="$HOME/pix/parameter/"
    local DEST="nvidia@192.168.1.102:~/pix/parameter/"
  else
    log_error "❌ 错误主机：$TMUX_NAME "
    return 1
  fi

  read -p "是否同步parameter-$msg？(Y/N): " answer
  answer=$(echo "$answer" | tr 'a-z' 'A-Z')  # 转换为大写（防止小写 y）
  if [ "$answer" == "Y" ]; then
    echo "开始同步parameter"
  elif [ "$answer" == "N" ]; then
    echo "取消同步parameter"
    return 0
  else
    echo "输入无效，请输入 Y 或 N。"
    return 1
  fi

  rsync -av --delete --exclude '.git' $SRC $DEST

}

function pixmoving_sync_scripts() {
  if [ "$TMUX_NAME" != "ORIN2" ]; then
    log_error "❌ 请在自驾工控机上运行"
    return 1
  fi

  read -p "是否同步scripts？(Y/N): " answer
  answer=$(echo "$answer" | tr 'a-z' 'A-Z')  # 转换为大写（防止小写 y）
  if [ "$answer" == "Y" ]; then
    echo "开始同步scripts"
  elif [ "$answer" == "N" ]; then
    echo "取消同步scripts"
    return 0
  else
    echo "输入无效，请输入 Y 或 N。"
    return 1
  fi

  rsync -av --delete --exclude '.git' $SCRIPTS_ROOT nvidia@192.168.1.102:~/pix/Autonomous-Ops-Platform/scripts/
}


