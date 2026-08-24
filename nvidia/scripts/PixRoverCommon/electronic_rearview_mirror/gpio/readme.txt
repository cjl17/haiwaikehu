


优控的触发脚本：

1. 执行./set_pwn_low_audc
2. 执行./set_camera_sync.sh
3. 执行./set_pwm_audc，如果显示过多，可以后台执行 nohub ./set_pwm_audc &
4. 如需重新触发，重复1，2，3步骤
5. 如需修改，重新编译， 执行gcc -o set_pwm_audc set_pwm_audc.c -lgpiod -lrt -lm  或 gcc -o set_pwn_low_audc set_pwn_low_audc.c -lgpiod -lrt -lm


宸耀的触发脚本：

1. 执行./set_pwn_low_neou
2. 执行./set_pwm_neou，如果显示过多，可以后台执行 nohub ./set_pwm_neou &
3. 如需重新触发，重复1，2步骤
4. 如需修改，重新编译， 执行gcc -o set_pwm_neou set_pwm_neou.c -lgpiod -lrt -lm  或 gcc -o set_pwn_low_neou set_pwn_low_neou.c -lgpiod -lrt -lm
