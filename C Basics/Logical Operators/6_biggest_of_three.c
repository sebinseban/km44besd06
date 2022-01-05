//sebin sebastian
//05/02/2022
//Write a program to find the biggest of three numbers using logical operators

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a> b && a > c)
    {
        printf("A is greater.\n");
    }
    else if ( b > a && b > c)
    {
        printf("B is greater.\n");
    }
    else 
    {
        printf("C is greater.\n");
    }
}