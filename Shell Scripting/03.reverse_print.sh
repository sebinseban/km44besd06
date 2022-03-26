#!/bin/bash

# Author: Sebin Sebastian
# Created: 24th March 2022
# Last Modified: 24th March 2022

# Description:
# Write script to print given number in reverse order,
# for eg. If no is 123 it must print as 321

# Usage
# The solution has been explained in the readme file. Refer the readme
# file along with this solution.

read -p "Enter your number: " num
reverse=0
while [ $num -ne 0 ]; do

        mod=$(( $num % 10 ))
        reverse=$(( $reverse * 10 + $mod ))
        num=$(( $num / 10))
done

echo "$reverse"
exit 0