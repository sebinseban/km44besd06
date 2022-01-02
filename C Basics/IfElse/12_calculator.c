//sebin sebastian
//02/01/2021
//Write a calculator program that takes two integer numbers from user, and 
//one of the operands +,-,* and / as a character and prints the appropriate result using if else.

#include <stdio.h>
int main()
{
    float x = 0, y = 0;
    char operator;
    printf("Enter two integers and the operator after that: ");
    scanf("%f %f %c", &x,&y,&operator);

    if (operator == '+')
    {
        printf("Addition: %f + %f = %0.2f\n", x,y,x+y);
    }
    else if (operator == '-')
    {
        printf("Subtraction: %f - %f = %0.2f\n",x,y,x-y);
    }
    else if (operator == '*')
    {
        printf("Multiplication: %f * %f = %0.2f\n ", x,y, x*y);
    }
    else if (operator == '/')
    {
        printf("Division: %f / %f = %0.2f\n",x,y,x/y);
    }

}