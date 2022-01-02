//sebin sebastian
//02/01/2022
//Write a program to find the biggest of three numbers using if else statements

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &a,&b,&c);

    if (a > b)
    {
        if( a > c)
        {
            printf("A is greater.\n");
        }
        else
        {
            printf("C is greater.\n");
        }
    }
    else if (b > a)
    {
        if ( b> c)
        {
            printf("B is greater.\n");
        }
        else 
        {
            printf("C is greater.\n");
        }
    }
    
}