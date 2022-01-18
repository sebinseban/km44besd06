//sebin sebastian
//18/01/2022
//Write a program to find out if an integer entered by a user is a prime number or not.
//(Count the number of factors for the number)

#include <stdio.h>

int main()
{
    int x,count = 0;
    printf("Enter a number:");
    scanf("%d",&x);

    int i = 1;
    while (i <= x)
    {
        if ( x % i == 0)
        {
            count++;
            
        }
        i++;
    }
    if ( count == 2)
    {
        printf("Prime.\n");
    }
    else
    {
        printf("Not prime.\n");
    }
}
