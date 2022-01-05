//sebin sebastian
//05/02/2022
//Write a program to find the biggest of four numbers.

#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter 4 numbers:");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if ( a > b && a > c && a > d)
    {
        printf("A is biggest.\n");
    }
    else if (b > a && b > c && b > d)
    {
        printf("B is biggest.\n");
    }
    else if (c > a && c > b && c > d)
    {
        printf("C is biggest.\n");
    }
    else 
    {
        printf("D is biggest.\n");
    }
}