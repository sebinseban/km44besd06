#!/bin/bash

# Author: Sebin Sebastian
# Created: 24th March 2022
# Last Modified: 24nd March 2022

# Description:
# Write shell script that will add two nos, which are supplied as command line argument,
# and if this two nos are not given show error and its usage

# It is:

if [ $# -eq 0 ]
  then
    echo "No arguments supplied"
    exit 1
fi
# The $# variable will tell you the number of input arguments the script was passed.

# Or you can check if an argument is an empty string or not like:

if [ -z "$1" ]
  then
    echo "No argument supplied"
    exit 1
fi


if [ $# -ne 3 ]
then
  echo "command line arguments are missing"
  exit 1
fi