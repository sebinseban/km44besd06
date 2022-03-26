#!/bin/bash

# Author: Sebin Sebastian
# Created: 24th March 2022
# Last Modified: 24nd March 2022

# Description:
# Write shell script that will add two nos, which are supplied as command line argument,
# and if this two nos are not given show error and its usage

# Usage
# The solution has been explained in the readme file. Refer the readme
# file along with this solution.

if [ -z "$2" ] ; then
        echo "No input arguments."
        echo "usage: $0 <arg1> <arg2>"
        exit 1
else
        echo "The sum of $1 and $2 is: "
        echo $(( ${1:-0} + ${2:-0}))
        exit 0
fi
exit 0



awk 'NR>=20 && NR<=25' lines.txt
This is line number 20
This is line number 21
This is line number 22
This is line number 23
This is line number 24
This is line number 25