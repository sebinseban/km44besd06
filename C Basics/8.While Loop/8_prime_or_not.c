//sebin sebastian
//16/01/2022
//Write a program to find out if an integer entered by a user is a prime number or not.

#include <stdio.h>

int main()
{
    int input;
    printf("Enter an integer:");
    scanf("%d",&input);
    
    int i = 2;
    
    while (input >= i)
    {
        if ( input % i != 0)
        {
            printf("Not prime.\n");
        }
        else 
        {
            printf("Prime.\n");
        }



        i++;
    }


}