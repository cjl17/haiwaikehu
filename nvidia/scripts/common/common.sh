#!/bin/bash

function log_info() {
  echo -e "\033[32m[INFO] $*\033[0m[\033[32m\u2714\033[0m]"
}

function log_warning() {
  echo -e "\033[33m[WARNING] $*\033[0m[\033[33m⚠️\033[0m]"
}

function log_error() {
  echo -e "\033[31m[ERROR] $*\033[0m[\033[31m\xE2\x9C\x97\033[0m]"
}

function get_system_version() {
  arch=$(uname -m)
  if [[ "$(uname -m)" == "aarch64" ]]; then
    echo jp_$(jetson_release | grep -i "Jetpack" | awk -F'Jetpack ' '{print $2}' | awk '{print $1}' | sed 's/\x1b\[[0-9;]*m//g')_ORIN
  elif [[ "$(uname -m)" == "x86_64" ]]; then
    echo amd64_$(lsb_release -rs)_IPC
  else
    echo "未知的架构: $(uname -m) "
  fi
}

function set_ros(){
  local script_path=$1
  local humble_path=$2
  local bashrc_path=$PIX_USER_ROOT/.bashrc

  sed -i '\#source \$PIX_USER_ROOT/\.humble\.sh#d' ~/.bashrc
  if [ -L "$humble_path" ]; then
    rm $humble_path
  fi
  log_info "2.0 重新映射: $script_path $humble_path" 
  ln -s $script_path $humble_path 
  ls -alF $PIX_USER_ROOT/.roscfg_path.sh 

  if grep -q "source $PIX_USER_ROOT/.roscfg_path.sh" "$bashrc_path"; then
    log_info "已经配置过了 - 成功"
  else
    log_info "正在配置中 - 成功"
cat << EOF >> $bashrc_path 
# pixbus environment variable
source $PIX_USER_ROOT/.roscfg_path.sh
EOF
  fi
}

function set_env_var(){
  local VAR_NAME=$1
  local VAR_VALUE=$2
  local BASHRC_FILE="/opt/pix/pix.env"

  if [[ -z "$VAR_NAME" || -z "$VAR_VALUE" ]]; then
    echo "❌ 用法: set_env_var <变量名> <变量值>"
    return 1
  fi

  # 判断 .bashrc 中是否已经有这个变量，并且值相同
  if grep -q "^export ${VAR_NAME}=${VAR_VALUE}$" "$BASHRC_FILE"; then
    # echo "✅ ${VAR_NAME} 已存在且值为 ${VAR_VALUE}，无需修改"
    return 0
  fi

  # 判断是否存在以 export VAR_NAME= 开头（但值可能不同）
  if grep -q "^export ${VAR_NAME}=" "$BASHRC_FILE"; then
    sed -i "s|^export ${VAR_NAME}=.*|export ${VAR_NAME}=${VAR_VALUE}|" "$BASHRC_FILE"
    # echo "🔄 已替换 .bashrc 中的 ${VAR_NAME} 为: ${VAR_VALUE}"
  else
    echo "export ${VAR_NAME}=${VAR_VALUE}" >> "$BASHRC_FILE"
    # echo "➕ 已添加 .bashrc 中的 ${VAR_NAME} 为: ${VAR_VALUE}"
  fi
  source $BASHRC_FILE
  return 0
}

function create_autostart_desktop() {
  local desktop_name="$1"
  local script_path="$2"

  mkdir -p "$PIX_USER_ROOT/.config/autostart"
  
  # 清除以往的开机自启
  [ ! -f "$PIX_USER_ROOT/.config/autostart/power_boot"* ] || rm $PIX_USER_ROOT/.config/autostart/power_boot*

  if [ -z "$desktop_name" ] || [ -z "$script_path" ]; then
    echo "用法: create_autostart_desktop <desktop名称> <脚本绝对路径>"
    return 1
  fi

  mkdir -p $PIX_USER_ROOT/.config/autostart

  cat <<EOF > $PIX_USER_ROOT/.config/autostart/${desktop_name}.desktop
[Desktop Entry]
Type=Application
Exec=$script_path
Hidden=false
NoDisplay=false
X-GNOME-Autostart-enabled=true
Name[en_US]=${desktop_name}
Name=${desktop_name}
Comment[en_US]=${desktop_name}
Comment=${desktop_name}
EOF

  echo "已创建 $PIX_USER_ROOT/.config/autostart/${desktop_name}.desktop"
}

function remove_old_logfile(){
    # 移除一周前日志文件夹
    # 源目录和目标目录
    local source_directory=$1
    local package_name=$2

    local target_directory="$PIX_USER_ROOT/pix/ros2log/old/$package_name"
    mkdir -p "$target_directory"  # 文件夹不存在则创建
    
    # 获取日期（以秒为单位）
    week_ago_1=$(date -d "1 week ago" +%s) # 获取一周前的日期
    week_ago_2=$(date -d "2 week ago" +%s) # 获取两周前的日期
    
    # 遍历源目录中的所有文件 把一周前的日志移动到old
    for folder in "$source_directory"/*; do
        if [[ -d "$folder" && "$folder" =~ ([0-9]{14}) ]]; then
            # 提取时间戳部分并转换为日期格式
            timestamp="${BASH_REMATCH[1]}"
            folder_date=$(date -d "${timestamp:0:4}-${timestamp:4:2}-${timestamp:6:2} ${timestamp:8:2}:${timestamp:10:2}:${timestamp:12:2}" +%s)
            # 如果文件夹日期早于一周前，则删除该文件夹
            if [ "$folder_date" -lt "$week_ago_1" ]; then
                echo "一周前日志文件夹: $folder"
                # 移动文件到目标目录
                mv "$folder" "$target_directory/"
            fi
        fi
    done

    # 遍历old/package_name目录中的所有文件 把两周前的日志删除
    for folder in "$target_directory"/*; do
        if [[ -d "$folder" && "$folder" =~ ([0-9]{14}) ]]; then
            # 提取时间戳部分并转换为日期格式
            timestamp="${BASH_REMATCH[1]}"
            folder_date=$(date -d "${timestamp:0:4}-${timestamp:4:2}-${timestamp:6:2} ${timestamp:8:2}:${timestamp:10:2}:${timestamp:12:2}" +%s)
            # 如果文件夹日期早于一周前，则删除该文件夹
            if [ "$folder_date" -lt "$week_ago_2" ]; then
                echo "两周前日志文件夹: $folder"
                # 删除文件夹
                rm -rf "$folder"  
            fi
        fi
    done
}

function create_symlink_for_latest_folder() {
    # 给最新日志建立软链
    local target_directory=$1
    local latest_timestamp=0
    local latest_folder=""

    # 检查目标目录是否存在
    if [ ! -d "$target_directory" ]; then
        echo "目录不存在: $target_directory"
        return 1
    fi

    # 遍历目标目录中的所有文件夹
    for folder in "$target_directory"/*; do
        if [[ -d "$folder" && $(basename "$folder") =~ ^[0-9]{14}$ ]]; then
            # 提取时间戳并与已知的最新时间戳比较
            timestamp=$(basename "$folder")
            year=${timestamp:0:4}
            if (( year > 2050 )); then
                echo "异常文件夹（时间超过2050年）: $folder，已放弃"
                continue
            fi
            if [[ "$timestamp" > "$latest_timestamp" ]]; then
                latest_timestamp=$timestamp
                latest_folder=$folder
            fi
        fi
    done

    # 检查是否找到最新的文件夹
    if [ -z "$latest_folder" ]; then
        echo "未找到符合格式的文件夹: $prefix"
        return 1
    fi

    # 为最新的文件夹创建软链接
    local symlink_name="1_latest"
    if [[ -L "$target_directory/$symlink_name" ]]; then
        # 是一个符号链接
        rm "$target_directory/$symlink_name" 
    else
        # 不是符号链接
        rm -rf "$target_directory/$symlink_name" 
    fi

    ln -sfn "$latest_folder" "$target_directory/$symlink_name"
    echo "为最新文件夹 $latest_folder 创建了软链接 $symlink_name"
}

function common_main(){
    local package_name=$1
    # 设置ROS日志文件报保存路径
    local timestamp=$(date +"%Y%m%d%H%M%S")
    local base_path=$PIX_USER_ROOT/pix/ros2log/$package_name
    local path=$base_path/$timestamp
    export ROS_LOG_DIR=$path
    
    mkdir -p "$path"  # 文件夹不存在则创建
    echo "日志文件夹: $path"
    # 环境变量ROS_LOG_DIR存在, 值为：$ROS_LOG_DIR
    exec 2> $ROS_LOG_DIR/"1_stderr.log"
    exec 1> $ROS_LOG_DIR/"1_stdout.log"
    echo "当前环境:$(which python3)"
    
    create_symlink_for_latest_folder $base_path
    remove_old_logfile $base_path $package_name

}

function log_write_day(){
  # 年月日时分00秒 天为一个日志文件夹
  local package_name=$1
  # 设置ROS日志文件报保存路径
  local timestamp_day=$(date +"%Y%m%d")000000
  local timestamp_time=$(date +"%H%M%S")
  local base_path=$PIX_USER_ROOT/pix/ros2log/$package_name
  local path="$base_path/$timestamp_day"
  export ROS_LOG_DIR=$path
  
  mkdir -p "$path"  # 文件夹不存在则创建

  # 环境变量ROS_LOG_DIR存在, 值为：$ROS_LOG_DIR
  exec 2> $ROS_LOG_DIR/"$timestamp_time"_stderr.log
  exec 1> $ROS_LOG_DIR/"$timestamp_time"_stdout.log

  create_symlink_for_latest_folder $base_path
  remove_old_logfile $base_path $package_name
}

# function log_write_day(){
#   # 年月日时分00秒 天为一个日志文件夹
#   local package_name=$1
#   # 设置ROS日志文件报保存路径
#   local timestamp=$2
#   local base_path=$PIX_USER_ROOT/pix/ros2log/$package_name
#   local path="$base_path/$timestamp"
#   export ROS_LOG_DIR=$path
  
#   mkdir -p "$path"  # 文件夹不存在则创建

#   # 环境变量ROS_LOG_DIR存在, 值为：$ROS_LOG_DIR
#   exec 2> $ROS_LOG_DIR/"$timestamp"_stderr.log
#   exec 1> $ROS_LOG_DIR/"$timestamp"_stdout.log

#   create_symlink_for_latest_folder $base_path
#   remove_old_logfile $base_path $package_name
# }

function wait_power_on1(){
  # 等待开机，退出循环

  local HOST=$1
  # 循环检测主机状态
  while true; do
    # 检测 HOST1 是否在线
    ping -c 1 -W 2 $HOST > /dev/null 2>&1
    STATUS=$?

    # 如果两台主机都在线，则执行命令并退出循环
    if [[ $STATUS -eq 0 ]]; then
      echo "所有主机都已上线，执行命令..."
      break
    else
      echo "等待主机上线..."
    fi

    # 等待一段时间后重新检查
    sleep 3
  done
}

function wait_power_on(){
  # 等待主机上线，退出循环
  local HOST=$1
  local DELAY=2          # 初始等待时间（秒）
  local MAX_DELAY=128     # 最大等待时间（秒）
  local last_status=-1   # 记录上次状态

  while true; do
    ping -c 1 -W 2 "$HOST" > /dev/null 2>&1
    STATUS=$?

    if [[ $STATUS -eq 0 ]]; then
      echo "✅ 主机 $HOST 已上线，执行命令..."
      break
    else
      # 只在状态变化或关键节点打印
      if [[ $STATUS -ne $last_status ]]; then
        echo "⏳ 主机 $HOST 未上线，开始等待..."
      fi
      echo "   （下一次检测将在 $DELAY 秒后）"
    fi
    last_status=$STATUS

    sleep $DELAY
    DELAY=$((DELAY * 2)) # 增量等待，直到 MAX_DELAY
    if [[ $DELAY -gt $MAX_DELAY ]]; then
      echo "❌ 等待时间已达最大值 $MAX_DELAY 秒，退出循环。"
      exit 1
    fi

  done
}


check_ptp_lock() {
  local passworld=$1
  local lock_file=/tmp/ptp_ok
  local service_name=$(systemctl list-units --type=service --plain | awk "\$1 ~ /^phc2sys@/ {print \$1}")

  # 获取最后一行日志
  local last_line
  last_line=$(echo "$passworld" | sudo -S  journalctl -u "$service_name" -n 1 -o cat)

  # 判断是否包含 s2
  if [[ "$last_line" == *"s2"* ]]; then
    if [[ "$last_line" =~ offset[[:space:]]+([-+]?[0-9]+)[[:space:]]+s2[[:space:]]+freq[[:space:]]+([-+]?[0-9]+)[[:space:]]+delay[[:space:]]+([-+]?[0-9]+) ]]; then
      local offset=${BASH_REMATCH[1]}
      local freq=${BASH_REMATCH[2]}
      local delay=${BASH_REMATCH[3]}

      local lock_status="UNLOCKED"
      if (( offset <= 10000 && offset >= -10000 )); then
        lock_status="LOCKED"
        [[ -n "$lock_file" ]] && touch "$lock_file"
      else
        [[ -f "$lock_file" ]] && rm -f "$lock_file"
      fi

      echo "Service: $service_name"
      echo "PTP Lock Status: $lock_status"
      # echo "Offset: $offset ns, Frequency correction: $freq ppm, Delay: $delay ns"
      echo "日志内容：$last_line"
    fi
  else
    echo "日志中未找到 s2，可能还没进入稳态"
    echo "日志内容：$last_line"
  fi
}

# 获取自动驾驶系统的用户名
get_pix_user() {
  for dir in /home/*; do
    if [ -d "$dir/pix" ]; then
      basename "$dir"
      return 0
    fi
  done
  echo "未找到用户" >&2
  return 1
}
# username=$(get_pix_user)
# echo "找到的用户名是: $username"