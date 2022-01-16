//sebin sebastian
//11/01/2021
//Write a program to print the sum of positive numbers and negative numbers seperately in the above program.

#include <stdio.h>

int main()
{   
    int inputs,i = 0,var1,sum = 0,sum_neg = 0;
    printf("enter total number of inputs:");
    scanf("%d",&inputs);

    while (i < inputs)
    {   
        printf("Enter the %d number:",i+1);
        scanf("%d",&var1);
        if (var1 > 0)
        {
            sum = sum + var1;
            i++;
        }
        else
        {
            sum_neg = sum_neg + var1;
            i++;
        }
    }
    printf("Total positive sum is : %d\n",sum);
    printf("Total negative sum is : %d\n",sum_neg);
}