#!/bin/bash
function log_info() {
  echo -e "\033[32m[INFO] $*\033[0m[\033[32m\u2714\033[0m]"
}

# tools模块更新
source $SCRIPTS_ROOT/tools/setup.sh

# Created by `pipx` on 2023-09-28 03:08:45
export PATH="$PATH:/home/$(whoami)/.local/bin"
export PATH="/usr/local/cuda/bin:$PATH"
export LD_LIBRARY_PATH="/usr/local/lib:/usr/local/cuda/lib64:$LD_LIBRARY_PATH"

export GMSSL_HOME=/usr/local/gmssl
export PATH=$GMSSL_HOME/bin:$PATH
export LD_LIBRARY_PATH=$GMSSL_HOME/lib:$LD_LIBRARY_PATH
export PKG_CONFIG_PATH=$GMSSL_HOME/lib/pkgconfig:$PKG_CONFIG_PATH

export CC="/usr/lib/ccache/gcc"
export CXX="/usr/lib/ccache/g++"
export CCACHE_DIR="$HOME/.cache/ccache/"

# ROS2
export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
export RCUTILS_COLORIZED_OUTPUT=0            # 控制输出消息时是否使用颜色,如果为 0-无颜色输出。如果为 1-有颜色输出。
export RCUTILS_LOGGING_USE_STDOUT=0          # 0-stderr 1-stdout。控制ros api的日志输出到stderr or stdout
export RCUTILS_LOGGING_BUFFERED_STREAM=0     # 0-强制取消缓冲流 1-强制对流进行行缓冲 没有设置stdout进行行缓冲，对stderr进行无缓冲
# ros2日志的时间戳设置为本地时间
export TZ=Asia/Shanghai
export RCUTILS_CONSOLE_OUTPUT_FORMAT="[{severity} {date_time_with_ms}] [{name}@{function_name}:{line_number}]: {message}"

# 启动history时间戳功能
export HISTTIMEFORMAT="%F %T "