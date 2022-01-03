//sebin sebastian
//02/02/2022
//Write a program to find the biggest of four numbers

#include <stdio.h>

int main()
{
    int a , b , c , d ;
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
            else 
            {
                printf("D is biggest.\n");
            }
        }
    }
    else if ( b > c)
    {
        if ( b > a)
        {
            if ( b > d)
            {
                printf("B is biggest.\n");
            }
            else 
            {
                printf("D is biggest.\n");
            }
        }
        else if (c > d)
        {
            if (c > b)
            {
                if (c > d)
                {
                    printf("C is biggest.");
                }
                else 
                {
                    printf("D is  biggest.\n");
                }
            }
        }
    }
}    
