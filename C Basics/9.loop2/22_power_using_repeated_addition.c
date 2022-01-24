//sebin sebastian
//20/01/2022
//Write a program to find the power of a number without using * operator (using repeated addition). 

#include <stdio.h>

int main()
{
    int digit,power,sum = 0;
    printf("Enter digit followed by power:");
    scanf("%d %d",&digit,&power);

    sum = digit;
    int digit_copy = digit;
    for( int i = 1; i < power ; i++)
    {
        for (int j = 1; j < digit; j++)
        {
            sum = sum + digit_copy;
        }
        digit_copy = sum;
    }
    printf("The sum is: %d\n",sum);
}