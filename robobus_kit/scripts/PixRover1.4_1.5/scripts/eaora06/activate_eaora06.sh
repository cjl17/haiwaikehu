#!/bin/bash
SCRIPT_DIR=$SCRIPTS_ROOT/PixRoverCommon/scripts

source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source /opt/pix/pix.env
source $SCRIPTS_ROOT/common/common.sh
common_main activate_program

echo "相机内核修复 --------------------------------------------------------"
$SCRIPTS_ROOT/PixRover1.4_1.5/tools/camera_firmware_fix/main.sh

# echo "组合导航初始化 --------------------------------------------------------"
# sudo $SCRIPTS_ROOT/PixRover1.4_1.5/scripts/eaora06/eaora06_integrated_navigation.sh

# echo "相机初始化 --------------------------------------------------------"
# sudo $SCRIPTS_ROOT/PixRover1.4_1.5/scripts/eaora06/eaora06_camera.sh
