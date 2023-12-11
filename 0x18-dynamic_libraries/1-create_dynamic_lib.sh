#!/bin/bash
gcc -fpic -c *.c
gcc -sharsd *.o -o liball.so
