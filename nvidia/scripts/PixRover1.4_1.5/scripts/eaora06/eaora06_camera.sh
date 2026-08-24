#!/bin/bash

echo 0 > /sys/class/pwm/pwmchip3/export; sleep 0.02;
echo 50000000 > /sys/class/pwm/pwmchip3/pwm0/period; sleep 0.02;
echo 50000000 > /sys/class/pwm/pwmchip3/pwm0/duty_cycle; sleep 0.02;
echo 1 > /sys/class/pwm/pwmchip3/pwm0/enable; sleep 0.2;
echo 0 > /sys/class/pwm/pwmchip3/pwm0/enable; sleep 0.2;


echo "set camera isp 0"
i2ctransfer -y -f 2 w3@0x34 0x02 0xd3 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x34 0x02 0xd6 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x34 0x02 0xbe 0x00; sleep 0.1;
i2ctransfer -y -f 2 w3@0x34 0x02 0xbe 0x10; sleep 0.2;
i2ctransfer -y -f 2 w3@0x34 0x02 0xd3 0x84; sleep 0.02;
i2ctransfer -y -f 2 w3@0x34 0x02 0xd6 0x84; sleep 0.02;

echo "set camera isp 1"
i2ctransfer -y -f 2 w3@0x35 0x02 0xd3 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x35 0x02 0xd6 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x35 0x02 0xbe 0x00; sleep 0.1;
i2ctransfer -y -f 2 w3@0x35 0x02 0xbe 0x10; sleep 0.2;
i2ctransfer -y -f 2 w3@0x35 0x02 0xd3 0x84; sleep 0.02;
i2ctransfer -y -f 2 w3@0x35 0x02 0xd6 0x84; sleep 0.02;

echo "set camera isp 2"
i2ctransfer -y -f 2 w3@0x36 0x02 0xd3 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x36 0x02 0xd6 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x36 0x02 0xbe 0x00; sleep 0.1;
i2ctransfer -y -f 2 w3@0x36 0x02 0xbe 0x10; sleep 0.2;
i2ctransfer -y -f 2 w3@0x36 0x02 0xd3 0x84; sleep 0.02;
i2ctransfer -y -f 2 w3@0x36 0x02 0xd6 0x84; sleep 0.02;
 
echo "set camera isp 3"
i2ctransfer -y -f 2 w3@0x37 0x02 0xd3 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x37 0x02 0xd6 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x37 0x02 0xbe 0x00; sleep 0.1;
i2ctransfer -y -f 2 w3@0x37 0x02 0xbe 0x10; sleep 0.2;
i2ctransfer -y -f 2 w3@0x37 0x02 0xd3 0x84; sleep 0.02;
i2ctransfer -y -f 2 w3@0x37 0x02 0xd6 0x84; sleep 0.02;

echo "set camera isp 4"
i2ctransfer -y -f 2 w3@0x30 0x02 0xd3 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x30 0x02 0xd6 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x30 0x02 0xbe 0x00; sleep 0.1;
i2ctransfer -y -f 2 w3@0x30 0x02 0xbe 0x10; sleep 0.2;
i2ctransfer -y -f 2 w3@0x30 0x02 0xd3 0x84; sleep 0.02;
i2ctransfer -y -f 2 w3@0x30 0x02 0xd6 0x84; sleep 0.02;

echo "set camera isp 5"
i2ctransfer -y -f 2 w3@0x31 0x02 0xd3 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x31 0x02 0xd6 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x31 0x02 0xbe 0x00; sleep 0.1;
i2ctransfer -y -f 2 w3@0x31 0x02 0xbe 0x10; sleep 0.2;
i2ctransfer -y -f 2 w3@0x31 0x02 0xd3 0x84; sleep 0.02;
i2ctransfer -y -f 2 w3@0x31 0x02 0xd6 0x84; sleep 0.02;

echo "set camera isp 6"
i2ctransfer -y -f 2 w3@0x32 0x02 0xd3 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x32 0x02 0xd6 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x32 0x02 0xbe 0x00; sleep 0.1;
i2ctransfer -y -f 2 w3@0x32 0x02 0xbe 0x10; sleep 0.2;
i2ctransfer -y -f 2 w3@0x32 0x02 0xd3 0x84; sleep 0.02;
i2ctransfer -y -f 2 w3@0x32 0x02 0xd6 0x84; sleep 0.02;

echo "set camera isp 7"
i2ctransfer -y -f 2 w3@0x33 0x02 0xd3 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x33 0x02 0xd6 0x00; sleep 0.02;
i2ctransfer -y -f 2 w3@0x33 0x02 0xbe 0x00; sleep 0.1;
i2ctransfer -y -f 2 w3@0x33 0x02 0xbe 0x10; sleep 0.2;
i2ctransfer -y -f 2 w3@0x33 0x02 0xd3 0x84; sleep 0.02;
i2ctransfer -y -f 2 w3@0x33 0x02 0xd6 0x84; sleep 0.02;

echo 2500000 > /sys/class/pwm/pwmchip3/pwm0/duty_cycle; sleep 0.02;
echo 0 > /sys/class/pwm/pwmchip3/pwm0/enable; sleep 0.02;

echo 33333333 > /sys/class/pwm/pwmchip3/pwm0/period; sleep 0.2;   
echo 1666666 > /sys/class/pwm/pwmchip3/pwm0/duty_cycle; sleep 0.2;
echo 1 > /sys/class/pwm/pwmchip3/pwm0/enable


# 30fps:
#   设置PWM信号周期(33ms):echo 33333333 > /sys/class/pwm/pwmchip3/pwm0/period   
#   设置PWM信号占空比(5%):echo 1666666 > /sys/class/pwm/pwmchip3/pwm0/duty_cycle
# 20fps:
#   设置PWM信号周期(50ms):echo 50000000 > /sys/class/pwm/pwmchip3/pwm0/period   
#   设置PWM信号占空比(5%):echo 2500000 > /sys/class/pwm/pwmchip3/pwm0/duty_cycle
# 10fps:
#   设置PWM信号周期(50ms):echo 100000000 > /sys/class/pwm/pwmchip3/pwm0/period   
#   设置PWM信号占空比(5%):echo 5000000 > /sys/class/pwm/pwmchip3/pwm0/duty_cycle
# 帧率验证: v4l2-ctl -d /dev/video0 --stream-mmap