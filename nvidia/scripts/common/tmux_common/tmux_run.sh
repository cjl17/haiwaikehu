#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env

function tmux_run()
{
  # script_path 是shell脚本的绝对路径
  local script_path=$1
  local session_name=${2:-""}
  # 判断是否还有多余参数
  if [ $# -ge 2 ]; then
    shift 2
  else
    shift $#
  fi
  local params=("$@")

  if [ ! -f "$script_path" ]; then
    echo "文件不存在: $script_path" >&2
    exit 1
  fi

  # 拼接参数
  local cmd="$script_path"
  for p in "${params[@]}"; do
    cmd+=" \"$p\""
  done

  echo "最终执行命令: tmux new-session -d -s $session_name bash -i -c \"$cmd\""
  tmux new-session -d -s "$session_name" "bash -i -c \"$cmd\""
}

function script_list_run()
{
  run_type=$1
  yaml_path=$PIXMOVING_TMUX_CFG
  hosts=$TMUX_NAME

  # 检查环境变量
  if [ -z "$PIXMOVING_TMUX_CFG" ]; then
    echo "[错误] 环境变量 PIXMOVING_TMUX_CFG 未定义，请先配置！" >&2
    exit 1
  fi

  if [ -z "$TMUX_NAME" ]; then
    echo "[错误] 环境变量 TMUX_NAME 未定义，请先配置！" >&2
    exit 1
  fi

  if [ ! -f "$PIXMOVING_TMUX_CFG" ]; then
    echo "[错误] 找不到配置文件: $PIXMOVING_TMUX_CFG" >&2
    exit 1
  fi

  if [ "$run_type" != "ManuRun" ] && [ "$run_type" != "BootupRun" ]; then
    echo "[错误] 第一参数只能是 ManuRun 或 BootupRun" >&2
    exit 1
  fi
  
  scripts_paths=$(yq ".${hosts}.${run_type}[]" "$yaml_path")

  for scripts_path in $scripts_paths; do
    abs_scripts_path=$(eval echo "$scripts_path")
    tmux_run $abs_scripts_path
  done
}

SCRIPT_PATH=$1
TUMX_NAME=${2:-""}

# 判断是否还有多余参数
if [ $# -ge 2 ]; then
  shift 2
else
  shift $#
fi

if [ -z "$SCRIPT_PATH" ]; then
  echo "[错误] 缺少参数，请输入 ManuRun / BootupRun / 脚本路径" >&2
  exit 1
fi

if [ "$SCRIPT_PATH" == "ManuRun" ] || [ "$SCRIPT_PATH" == "BootupRun" ]; then
  script_list_run $SCRIPT_PATH
else
  # 判断是否是一个脚本路径
  SCRIPT_PATH=$(eval echo "$SCRIPT_PATH")
  if [ ! -f "$SCRIPT_PATH" ]; then
    echo "[错误] 脚本路径不存在: $SCRIPT_PATH" >&2
    exit 1
  fi

  if [ -z "$TUMX_NAME" ]; then
    # 如果为空字符串 
    TUMX_NAME=$(basename "$SCRIPT_PATH" .sh)  # 获取文件路径文件名称
    echo $TUMX_NAME
  fi

  tmux_run $SCRIPT_PATH $TUMX_NAME "$@"
fi
