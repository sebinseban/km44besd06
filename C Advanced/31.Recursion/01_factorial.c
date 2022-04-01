//sebin sebastian
//01/04/2022
//Write a recursive function to return the factorial of a number as argument.


#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main (int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }
    
    int n;
    n = atoi(argv[1]);
    printf("%d\n", factorial(n));
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}