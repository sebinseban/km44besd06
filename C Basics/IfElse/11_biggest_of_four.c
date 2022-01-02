//sebin sebastian
//02/02/2022
//Write a program to find the biggest of four numbers

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &a,&b,&c,&d);

    if ( a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A is biggest.\n");
            }
        }
    }
    else if ( b > a)
    {
        if ( b > c)
        {
            if ( b > d)
            {
                printf("B is biggest.\n");
            }
        }
    }
    else if ( c > a)
    {
        if (c > b)
        {
            if ( c > d)
            {
                printf("C is biggest.\n");
            }
        }
    }
    else if (d > a)
    {
        if ( d > b)
        {
            if ( d > c)
            {
                printf("D is biggest.");
            }
        }
    } 
    else 
    {
        printf("Something wrong\n");
    }
    
}