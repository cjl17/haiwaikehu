#!/bin/bash

sudo phc_ctl /dev/ptp0 set `date +%s.%10N` && ssh nvidia@192.168.1.102 "sudo phc_ctl /dev/ptp0 set `date +%s.%10N`"
sudo phc_ctl /dev/ptp0 set `date +%s.%10N` && ssh nvidia@192.168.1.103 "sudo phc_ctl /dev/ptp0 set `date +%s.%10N`"

sudo phc_ctl /dev/ptp0 get
ssh nvidia@192.168.1.102  sudo phc_ctl /dev/ptp0 get
ssh nvidia@192.168.1.103  sudo phc_ctl /dev/ptp0 get


sudo phc_ctl /dev/ptp0 set `date +%s.%10N` && ssh pc@192.168.1.104 "sudo phc_ctl /dev/ptp0 set `date +%s.%10N`"
