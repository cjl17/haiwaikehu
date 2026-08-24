#!/bin/bash
source /opt/pix/pix.env
source $(dirname /home/*/pix)/.bashrc
source $(dirname /home/*/pix)/.roscfg_path.sh 

source $SCRIPTS_ROOT/common/common.sh
common_main umount_failcase

set -euo pipefail

TARGET_MOUNT="/home/$PIX_USER/pix/failcase_data"
sync $TARGET_MOUNT
if mountpoint -q "$TARGET_MOUNT" 2>/dev/null; then
  echo "pixmoving" | sudo -S fuser -mv "$TARGET_MOUNT" || true   # kill占用
  echo "pixmoving" | sudo -S umount -l "$TARGET_MOUNT"
fi

if mountpoint -q $TARGET_MOUNT; then
  echo "❌ 卸载失败：仍然是挂载点" >&2
else
  echo "✅ 卸载成功"
fi
