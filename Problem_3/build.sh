#!/bin/bash

### Filename : build.sh
## Author : Sed Centeno
# Date : 10/31/2024
### Description:
## Build file for "bankApp.cpp"

echo "Building bankApp.cpp..."
g++ ./bankApp.cpp ./bankAccount.cpp -o ./bankApp
echo "Finished building."
