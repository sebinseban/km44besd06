//sebin sebastian
//06/02/2022
//Write a program to find the biggest of two numbers using conditional operator


#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter 2 integers: ");
    scanf("%d %d",&a,&b);

    (a > b)? printf("A is greater.\n") : printf("B is greater.\n");
}