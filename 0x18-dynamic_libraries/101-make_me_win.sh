#!/bin/bash
gcc -fpic -shared injection.c -o injection.so
LD_PRELOAD=./injection.so
