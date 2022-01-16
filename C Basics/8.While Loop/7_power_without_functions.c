//sebin sebastian
//16/01/2022
//Write a program to find the power of a given number to a given integer without using any builtin functions.
/*
        eg., inputs: 5   3
        output: 5*5*5 = 125 */

#include <stdio.h>

int main()
{
    int m,n,power;
    printf("Enter a number followed by power value:");
    scanf("%d %d",&m,&n);
    power = m;
    while (n > 0)
    {
        power = power * m;
        n--;
    }
    printf("The answer is : %d\n",power);

}