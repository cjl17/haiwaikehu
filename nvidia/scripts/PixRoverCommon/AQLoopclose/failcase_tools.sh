source $SCRIPTS_ROOT/common/common.sh
common_main failcase_tools

# 默认启动master
AUTOWARE_ROBOBUS_WORKSPACE=${1:-autoware-robobus.dev-master}
if [ -z "$AUTOWARE_ROBOBUS_WORKSPACE" ]; then
  echo 请输入 AUTOWARE_ROBOBUS_WORKSPACE
  exit 1
fi

# 检查是否为正确的工作空间
if [ $AUTOWARE_ROBOBUS_WORKSPACE != "autoware-robobus.dev-master" ]  && [ "$AUTOWARE_ROBOBUS_WORKSPACE" != "autoware-robobus.master" ] && [ "$AUTOWARE_ROBOBUS_WORKSPACE" != "autoware" ]; then
  echo 请输入 autoware-robobus.dev-master / autoware-robobus.master
  exit 1
fi

log_info "工作空间: $AUTOWARE_ROBOBUS_WORKSPACE"
source ~/pix/robobus/$AUTOWARE_ROBOBUS_WORKSPACE/install/setup.bash
ros2 launch failcase_tools failcase_tools_container.launch.py 