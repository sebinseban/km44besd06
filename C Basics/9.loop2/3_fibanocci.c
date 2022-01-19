//sebin sebastian
//18/01/2022
//Write a program to print the first n Fibonacci numbers.
/*
        Eg., First 8 Fibonacci numbers are :
        1  1  2  3  5  8  13  21          */

#include <stdio.h>

int main()
{
    int input,var1=0,var2 = 1, next = 0;
    printf("Enter stop limit for fibonacci series:");
    scanf("%d",&input);
    printf("The first %d fibonocci numbers are:", input);
    printf(" %d %d",var1,var2);
    next = var1 +var2;

    while (next <= input)
    {
        printf(" %d ",next);
        var1 = var2;
        var2 = next;
        next = var1 + var2;
    }
    
    for (int i = 0; i <= input ; i++)
    {
        
    }

    printf("\n");
}