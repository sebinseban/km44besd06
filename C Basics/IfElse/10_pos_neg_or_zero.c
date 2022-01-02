//sebin sebastian
//02/01/2022
//C program to check whether a number is positive, negative or zero

#include <stdio.h>

int main()
{
    int x = 0;
    printf("Enter an integer:");
    scanf("%d", &x);

    if ( x > 0)
    {
        printf("Positive \n");
    }
    else if ( x < 0)
    {
        printf("Negative\n");
    }
    else 
    {
        printf("Zero\n");
    }
}