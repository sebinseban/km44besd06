//sebin sebastian
//20/01/2022
//Write a program to find the power of a number without using * operator (using repeated addition). 

#include <stdio.h>

int main()
{
    int digit,power,sum = 0;
    printf("Enter digit followed by power:");
    scanf("%d %d",&digit,&power);

    int digit_copy = digit;
    for( int i = 0; i < power ; i++)
    {
        for(int j = 0; j < digit; j++)
        {
            sum = sum + digit_copy;
        } 
        digit_copy = digit_copy * digit_copy;
        
    }
    printf("The sum is: %d\n",sum);
}