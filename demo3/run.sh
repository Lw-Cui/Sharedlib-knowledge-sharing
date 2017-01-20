#!/bin/bash
echo --main.cpp--
cat main.cpp
echo
echo --l1.cpp--
cat l1.cpp
echo
echo --l2.cpp--
cat l2.cpp
echo
make
echo
echo ./main.out
./main.out
echo return value of main.out is $?
