//sebin sebastian
//20/01/2022
//Write a program to find the power of a number without using * operator (using repeated addition). 

#include <stdio.h>

int main()
{
    int digit,power,sum = 0;
    printf("Enter digit followed by power:");
    scanf("%d %d",&digit,&power);

    for( int i = 0; i < power ; i++)
    {
        for(int j = 0; j < digit; j++)
        {
                            

            for(int k = 0; k < digit; k++)
            {
                sum = sum + digit;
            }
        }
        
    }
    printf("The sum is: %d\n",sum);
}