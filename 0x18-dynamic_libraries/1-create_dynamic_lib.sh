#!/bin/bash
gcc -fPIC -c *.c
gcc -sharsd *.o -o liball.so
