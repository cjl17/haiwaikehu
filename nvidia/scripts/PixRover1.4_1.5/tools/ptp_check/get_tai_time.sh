#!/bin/bash

sudo phc_ctl /dev/ptp0 get
ssh nvidia@192.168.1.102  sudo phc_ctl /dev/ptp0 get
ssh nvidia@192.168.1.103  sudo phc_ctl /dev/ptp0 get