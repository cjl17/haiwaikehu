#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)
source $SCRIPTS_ROOT/common/common.sh

name=$1
log_info "restart: $TMUX_NAME:$name"

get_yaml_value() {
  local yaml_file="$1"
  local key="$2"

  if [ ! -f "$yaml_file" ]; then
    echo "❌ YAML 文件不存在: $yaml_file"
    return 1
  fi

  if [ -z "$key" ]; then
    echo "❌ 必须提供键名"
    return 1
  fi

  value=$(yq e ".$key" "$yaml_file")

  if [ "$value" == "null" ]; then
    echo "❌ 未找到键: $key"
    return 1
  fi

  echo "$value"
}


$SCRIPTS_ROOT/common/tmux_common/main.py close $name
sleep 3
$SCRIPTS_ROOT/common/tmux_common/main.py force_close $name

script_path=$(get_yaml_value $SCRIPTS_ROOT/PixRoverCommon/config/nodes_map.yaml $name)
$SCRIPTS_ROOT/common/tmux_common/tmux_run.sh $SCRIPTS_ROOT/$script_path

