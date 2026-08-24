#!/bin/bash
# 启动pwm输出，5000快速拉起
echo 5000 > /sys/class/pwm/pwmchip3/pwm0/duty_cycle
echo 1 > /sys/class/pwm/pwmchip3/pwm0/enable
