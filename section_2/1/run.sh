#!/bin/sh

sudo insmod main.ko
sudo rmmod main

dmesg
