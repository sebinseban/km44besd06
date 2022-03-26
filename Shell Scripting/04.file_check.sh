#!/bin/bash

# Author: Sebin Sebastian
# Created: 24th March 2022
# Last Modified: 24th March 2022

# Description:
# Write script to determine whether given file exist or not,
# file name is supplied as command line argument,
# Also check for sufficient number of command line arguments.

# Usage
# The solution has been explained in the readme file. Refer the readme
# file along with this solution.

if [ -z "$1" ]; then
        echo "$0: missing file operand"
        exit 1
fi

if [[ -e "$1" ]]; then
        echo "File exists in the directory"
        exit 0
else
        echo "$0: cannot access '$1' : No such file or directory"
        exit 1
fi
