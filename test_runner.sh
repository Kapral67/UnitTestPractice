#!/bin/bash

make clean
make
./PasswordTest
printf "\n\n"
gcov -r Password.cpp
make clean
