//sebin sebastian
//06/01/2022
//Write a program that determines whether a given integer is odd or even and displays the appropriate message

#include <stdio.h>

int main()
{
    int x;
    printf("Enter an integer:");
    scanf("%d",&x);

    x % 2 == 0 ? printf("Even.\n") : printf("Odd.\n");


}