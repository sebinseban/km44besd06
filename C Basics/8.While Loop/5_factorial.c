//sebin sebastian
//11/01/2021
//Write a program to find the factorial of a given number.

#include <stdio.h>

int main()
{
    int n,factorial ;
    printf("Enter a number to find its factorial:");
    scanf("%d",&n);

    //N! = n * n-1 * n-2 * …. 2 * 1

    factorial = n;
    while (n > 1 )
    {
        n--;
        factorial = factorial * n;
    }
    printf("The factorial is : %d\n", factorial);
}