//sebin sebastian
//11/01/2021
//Write a program to print the sum of n given numbers (Positive / negative) and print the final sum.

#include <stdio.h>

int main()
{   
    int inputs,i = 0,var1,sum = 0;
    printf("enter total number of inputs:");
    scanf("%d",&inputs);

    while (i < inputs)
    {   
        printf("Enter the %d number:",i+1);
        scanf("%d",&var1);
        sum = sum + var1;
        i++;
    }
    printf("Total sum is : %d\n",sum);
}