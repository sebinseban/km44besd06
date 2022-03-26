# #!/bin/bash

# # Author: Sebin Sebastian
# # Created: 24th March 2022
# # Last Modified: 24th March 2022

# # Description:
# # How to write script, that will print, Message ""Hello World"",
# # in Boldand Blink effect, and in different Colors like red, brown etc
# # using echo command.

# # Usage
# # The solution has been explained in the readme file. Refer the readme
# # file along with this solution.

# # Color       #define       Value       RGB
# # black     COLOR_BLACK       0     0, 0, 0
# # red       COLOR_RED         1     max,0,0
# # green     COLOR_GREEN       2     0,max,0
# # yellow    COLOR_YELLOW      3     max,max,0
# # blue      COLOR_BLUE        4     0,0,max
# # magenta   COLOR_MAGENTA     5     max,0,max
# # cyan      COLOR_CYAN        6     0,max,max
# # white     COLOR_WHITE       7     max,max,max

# # tput is the general command used to manipulate the terminal
# # In this adventure, we will look at tput, a command used to manipulate
# #  our terminal. With it, we can change the color of text, apply
# #  effects, and generally brighten things up. More importantly, we
# #  can use tput to improve the human factors of our scripts.
# #  For example, we can use color and text effects to better present
# #  information to our users.


# # setaf is the subcommand used to set text (foreground) colour
# # setab is the subcommand used to set text (backgroud) colour

# echo " $(tput setaf 0) This is black "
# echo " $(tput setab 7) look at the table above to manage colour code"


# #BOLD
# # The most compatible way of doing this is using tput to discover the right sequences to send to the terminal:

#         # bold=$(tput bold)
#         # normal=$(tput sgr0)
# # then you can use the variables $bold and $normal to format things:

# # echo "this is ${bold}bold${normal} but this isn't"

# # using shell variables for colour also
# # red=`tput setaf 1`
# # green=`tput setaf 2`
# # reset=`tput sgr0`
# # echo "${red}red text ${green}green text${reset}"

# bold=$(tput bold)
# nomral=$(tput sgr0)

# echo "${bold}this is in bold ${normal}But this is not"

# num=7
# while [ $num -ne 0 ]  ; do
#         echo " $(tput setab $num) $(tput bold) Hello, World $(tput setaf $num) "
#         ((num--))

# done


echo "hello world"
echo "\033[1;31mhello world\033[0m"
echo "\033[1;32mhello world\033[m"
echo "\033[1;33mhello world\033[m"
echo "\033[1;34mhello world\033[m"

echo "\033[1mhello world\033[0m"
echo "\033[33mhello world\033[0m"
echo  "\e[5mhello world\033[0m"