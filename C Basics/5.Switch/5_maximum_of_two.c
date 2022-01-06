//sebin sebastian
//06/01/2022
//C program to find maximum of two numbers using switch statement

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);

    switch ( a > b)
    {
        case 1:
            printf("A is greater.\n");
            break;
        
        case 0:
            printf("B is greater.\n");
            break;
    }
}