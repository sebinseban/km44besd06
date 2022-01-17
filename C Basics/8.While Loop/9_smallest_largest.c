//sebin sebastian
//17/01/2022
//Write a program to input n numbers and print the largest and smallest numbers out of them.
/*
        Eg., 3,23,56,34,78,45,26,90,68,77
        Biggest Number is 90
        Smallest Number is 3 n */

#include <stdio.h>

int main()
{
    int input,var1,var2 = 0,result = 0;
    printf("Enter total numbers you want:");
    scanf("%d",&input);

    int i = 0;
    while ( i < input)
    {
        printf("Enter %d number:",i+1);
        scanf("%d",&var1);

        i++;
        if ( var1 > result)
        {
            result = var1;
        }

    }
    printf("The biggest number is :%d\n",result);
    printf("The smallest number is :try later\n");   //need to implement logic for smallest number
}