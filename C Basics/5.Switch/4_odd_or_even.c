//sebin sebastian
//06/01/2022
//C program to check whether a number is odd or even using switch statement

#include <stdio.h>

int main()
{
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);

    switch (a % 2 == 0)

    {
        case 1: 
            printf("Even.\n");
            break;

        case 0:
            printf("Odd.\n");
            break; 
    }


}