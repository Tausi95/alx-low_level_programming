#!/bin/bash

# Compile all .c files into a dynamic library named liball.so

# Get a list of all .c files in the current directory, excluding those with prefixes
c_files=$(ls | grep -E '^[0-9]*-.*\.c$')

# Compile each .c file into the dynamic library
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -o liball.so $c_files

