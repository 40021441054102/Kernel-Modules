#! /bin/bash

if [ -e "out.log" ]; then
    rm out.log
fi

touch out.log
make clean
make

sudo insmod qb_module.ko
dmesg | tail -n 1 > out.log
sudo rmmod qb_module.ko
dmesg | tail -n 1 >> out.log
