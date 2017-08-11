#!/bin/sh

sudo insmod main.ko
sudo rmmod main.ko

dmesg
