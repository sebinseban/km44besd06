//sebin sebastian
//19/01/2022
//Write a program to find the reverse of an integer.
/*Hint: remove each digit and put it in the right place in another integer variable.

        eg., input 4675
        output: 5764    */

#include <stdio.h>

int main()
{
    int input,reverse = 0;
    printf("Enter an integer:");
    scanf("%d",&input);
    int mod;


    while (input != 0)
    {
        mod = input % 10;
        reverse = reverse * 10 + mod;
        input = input / 10;
    }
    printf("Reversed integer is: %d\n",reverse);
}