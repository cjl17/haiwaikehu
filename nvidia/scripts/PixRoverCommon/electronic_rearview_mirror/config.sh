sudo chmod 777 /sys/devices/platform/bus@0/13e00000.host1x/15340000.vic/devfreq/15340000.vic/governor
sudo echo userspace > /sys/devices/platform/bus@0/13e00000.host1x/15340000.vic/devfreq/15340000.vic/governor
sudo chmod  644 /sys/devices/platform/bus@0/13e00000.host1x/15340000.vic/devfreq/15340000.vic/governor

sudo chmod 777 /sys/devices/platform/bus@0/13e00000.host1x/15340000.vic/devfreq/15340000.vic/userspace/set_freq
sudo echo 729600000 > /sys/devices/platform/bus@0/13e00000.host1x/15340000.vic/devfreq/15340000.vic/userspace/set_freq
sudo chmod 644 /sys/devices/platform/bus@0/13e00000.host1x/15340000.vic/devfreq/15340000.vic/userspace/set_freq

sudo chmod 777 /sys/devices/platform/bus@0/13e00000.host1x/154c0000.nvenc/devfreq/154c0000.nvenc/governor
echo userspace > /sys/devices/platform/bus@0/13e00000.host1x/154c0000.nvenc/devfreq/154c0000.nvenc/governor

sudo chmod  777 /sys/devices/platform/bus@0/13e00000.host1x/154c0000.nvenc/devfreq/154c0000.nvenc/userspace/set_freq
echo 768000000 > /sys/devices/platform/bus@0/13e00000.host1x/154c0000.nvenc/devfreq/154c0000.nvenc/userspace/set_freq

sudo chmod  644 /sys/devices/platform/bus@0/13e00000.host1x/154c0000.nvenc/devfreq/154c0000.nvenc/governor
sudo chmod  644 /sys/devices/platform/bus@0/13e00000.host1x/154c0000.nvenc/devfreq/154c0000.nvenc/userspace/set_freq