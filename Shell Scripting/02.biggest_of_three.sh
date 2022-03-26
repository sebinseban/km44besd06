#!/bin/bash

# Author: Sebin Sebastian
# Created: 24th March 2022
# Last Modified: 24nd March 2022

# Description:
# Write Script to find out biggest number from given three nos.
# Nos are supplied as command line arguments.
# Print error if sufficient arguments are not supplied.

# Usage
# The solution has been explained in the readme file. Refer the readme
# file along with this solution.

if [ $# -ne 3 ]; then
        echo "No arguments supplied"
        echo "usage: $0 <arg1> <arg2> <arg3>"
        exit 1
fi

if [ $1 -eq $2 ] && [ $1 -eq $3 ]; then
        echo "All numbers are equal."

elif [ $1 -gt $2 -a $1 -gt $3 ]; then
        echo "$1 is the largest."

elif [ $2 -gt  $1 -a $2 -gt $3 ]; then
        echo "$2 is the largest."

else
        echo "$3 is the largest."

fi