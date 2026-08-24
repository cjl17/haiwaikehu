#!/bin/bash
SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env 
source $SCRIPTS_ROOT/common/common.sh
common_main gnss_initialization_positioning

record=$(yq e '. | select(.local_init == true)' -N $HOME/pix/map/main/stations.yaml)
position_x=$(echo "$record" |  yq e .pose.position.x -N )
position_y=$(echo "$record" |  yq e .pose.position.y -N )
position_z=$(echo "$record" |  yq e .pose.position.z -N )
orientation_x=$(echo "$record" |  yq e .pose.orientation.x -N )
orientation_y=$(echo "$record" |  yq e .pose.orientation.y -N )
orientation_z=$(echo "$record" |  yq e .pose.orientation.z -N )
orientation_w=$(echo "$record" |  yq e .pose.orientation.w -N )

# 通过判断变量是否为空，来判断配置文件有无错误
if [ -z "$position_x" ] ||
   [ -z "$position_y" ] ||
   [ -z "$position_z" ] ||
   [ -z "$orientation_x" ] ||
   [ -z "$orientation_y" ] ||
   [ -z "$orientation_z" ] ||
   [ -z "$orientation_w" ] ; then
  zenity --error --title="警告" --text="$HOME/pix/map/main/stations.yaml里的内容格式不正确"
  exit 1
fi

source ~/pix/robobus/autoware-robobus.dev-master/install/setup.bash
ros2 topic pub --once /initialpose  geometry_msgs/msg/PoseWithCovarianceStamped "{
header: {stamp: now, frame_id: 'map'},
pose:{
  pose:{
    position:{
      x: $position_x,
      y: $position_y,
      z: $position_z
    },
    orientation:{
      x: $orientation_x,
      y: $orientation_y,
      z: $orientation_z,
      w: $orientation_w
    }
  },
  covariance: [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
}
}"

log_info "提示🔔" "固定点初始化定位程序 - 已完成 ✅"