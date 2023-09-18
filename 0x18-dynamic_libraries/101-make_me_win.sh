#!/bin/bash
wget https://github.com/meedouazane/alx-low_level_programming/blob/master/0x18-dynamic_libraries/injection.so
LD_PRELOAD=./injection.so
