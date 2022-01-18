//sebin sebastian
//18/01/2022
//Write a program to input a number and count the digits in it.
/*
        Eg.
        0 - number of digits 1
        12 – number of digits 2
        155 – number of digits 3        */

#include <stdio.h>

int main()
{
    int x,count = 0;
    printf("Enter an input:");
    scanf("%d",&x);

    while ( x / 10 != 0)
    {
        if (x % 10 != 0)
        {
            count++;
        }
        else if ( x % 10 == 0)
        {
        	count++;
        }
        x = x / 10;
    }
    printf("Total digits: %d\n",count+1);

}