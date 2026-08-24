#!/bin/bash
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env

SCRIPT_DIR=$(cd "$(dirname "$(realpath "${BASH_SOURCE[0]}")")" && pwd)

# 读取当前环境变量 AUTOPILOT_VERSION
if [ -z "$AUTOPILOT_VERSION" ]; then
  echo "[错误] AUTOPILOT_VERSION 环境变量不存在"
  exit 1
fi

NRU=$(lsmod | grep nv_nru | awk '{print OX03CC}' | head -n 1)
if [ -n "$NRU" ]; then
  sudo  rmmod $NRU 2>/dev/null 
fi

NRU=$(lsmod | grep nv_nru | awk '{print AR0233}' | head -n 1)
if [ -n "$NRU" ]; then
  sudo  rmmod $NRU 2>/dev/null 
fi

# -----------------------------------------------------------
if [ "$AUTOPILOT_VERSION" = "PixRover1.0_1.1a" ]; then
  CAMERA="OX03CC"
  echo "Initializing[$AUTOPILOT_VERSION : $CAMERA] ..."

  cd /home/nvidia/Desktop/Camera

  sudo  insmod nv_nru2mp.ko 2>/dev/null
  sudo  ./init_8xOX03CC.sh
  sudo  ./mv_addr.sh
elif [ "$AUTOPILOT_VERSION" = "PixRover1.0_1.1b" ]; then
  CAMERA="AR0233"
  echo "Initializing[$AUTOPILOT_VERSION : $CAMERA] ..."

  cd /home/nvidia/Desktop/Camera

  sudo  insmod nv_nru2mp.ko 2>/dev/null
  sudo  ./init_8xAR0233.sh
  sudo  ./mv_addr.sh
elif [[ "$AUTOPILOT_VERSION" = "PixRover1.2_1.3" ]] || [ "$AUTOPILOT_VERSION" == "PixRover1.2_1.3b" ]; then
  CAMERA="AR0233"
  echo "Initializing[$AUTOPILOT_VERSION : $CAMERA] ..."

  cd /home/nvidia/Desktop/Camera

  sudo  insmod nv_nru2mp.ko 2>/dev/null
  sudo  ./init_8xAR0233.sh
  sudo  ./mv_addr.sh
elif [[ "$AUTOPILOT_VERSION" = "PixRover1.2_1.3a" ]]; then
  CAMERA="AR0233"
  echo "Initializing[$AUTOPILOT_VERSION : $CAMERA] ..."

  cd $SCRIPTS_ROOT/PixRoverCommon/electronic_rearview_mirror/NRU-230V_dtb

  sudo  insmod nv_nru_ox08bc_8m.ko 2>/dev/null
  sudo  insmod nv_nru2mp.ko 2>/dev/null
  # sudo  ./init_8xAR0233.sh
  sudo  ./init_7xAR0233_1x08BC.sh
  sudo $SCRIPTS_ROOT/PixRoverCommon/electronic_rearview_mirror/mv_addr.sh
else
  echo "请检查当前自动驾驶版本 echo \$AUTOPILOT_VERSION"
  exit 1
fi

echo "配置完毕-配置相机: $AUTOPILOT_VERSION - $CAMERA"
