//sebin sebastian
//01/01/2021
//Write a program to print the biggest of two numbers.

#include<stdio.h>
int main()
{
    int x = 0, y = 0;
    printf("Enter 2 integers: ");
    scanf("%d %d",&x,&y);

    if(x > y)
    {
        printf("%d is the biggest.\n",x);
    }
    else 
    {
        printf("%d is the biggest\n",y);
    }
}