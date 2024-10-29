#!/bin/bash

#######################################
# Filename : build.sh
# Author : Sed Centeno
# Date : 10/28/2024
#
# Description :
# Builds "myApp.cpp"
#
# Example Invocation :
# ./build.sh
#######################################

echo "Building myApp.cpp..."
g++ ./myApp.cpp ./derek_LED.cpp -o ./myApp
echo "Finished building."
