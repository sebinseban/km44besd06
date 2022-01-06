//sebin sebastian
//06/01/2022
//Write a program to find the biggest of three numbers using conditional operator

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three integers:");
    scanf("%d %d %d",&a,&b,&c);

    (a > b ) ? 
                a > c ? printf("A is biggest.\n") : printf("C is biggest.\n")

            :   b > c ? printf("B is biggest.\n") : printf("C is biggest.\n");
}