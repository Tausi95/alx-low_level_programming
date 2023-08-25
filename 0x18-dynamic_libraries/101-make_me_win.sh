#!/bin/bash

# Set the LD_PRELOAD environment variable to load the hook shared library
export LD_PRELOAD=./hook.so

# Run the gm program with your numbers
./gm 9 8 10 24 75 9

