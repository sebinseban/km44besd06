//sebin sebastian
//01/01/2021
//Write a program that determines whether a given integer is odd or even and displays the appropriate message.

#include<stdio.h>

int main()
{
    int x = 0;
    printf("Enter an integer:");
    scanf("%d",&x);

    if( x % 2 == 0)
    {
        printf("%d is even.\n",x);
    }
    else 
    {
        printf("%d is odd.\n",x);
    }
}