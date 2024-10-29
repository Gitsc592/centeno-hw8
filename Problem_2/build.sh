#!/bin/bash

#######################################
# Filename : build.sh
# Author : Sed Centeno
# Date : 10/28/2024
#
# Description :
# Builds "myBlink.cpp"
#
# Example Invocation :
# ./build.sh
#######################################

echo "Building myBlink.cpp..."
g++ ./myBlink.cpp ./derek_LED.cpp -o ./myBlink
echo "Finished building."
