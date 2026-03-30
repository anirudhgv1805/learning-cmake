#!/bin/bash

echo "Starting to build App"
cmake -B build
echo "Generated the Build files"
cmake --build build

echo -e "\n'Starting the App'\n"
./build/App