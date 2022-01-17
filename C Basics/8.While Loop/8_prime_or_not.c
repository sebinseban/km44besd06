//sebin sebastian
//16/01/2022
//Write a program to find out if an integer entered by a user is a prime number or not.

#include <stdio.h>

int main()
{
    int input,temp = 0;
    printf("Enter an integer:");
    scanf("%d",&input);

    int i = 1;

    while (i <= input)
    {
        if ( input % i == 0)
        {
            temp++;
        }
        i++;
    }
    if (temp == 2)
    {
        printf("Prime.\n");
    }
    else
    {
        printf("Not Prime.\n");
    }


}