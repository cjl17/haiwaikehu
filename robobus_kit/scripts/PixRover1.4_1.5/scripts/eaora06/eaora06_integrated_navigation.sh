#!/bin/bash
systemctl stop gpsd
systemctl stop gpsd.socket
stty -F /dev/ttyTHS1 speed 460800
timeout 5s cat /dev/ttyTHS1 | grep GNRMC
