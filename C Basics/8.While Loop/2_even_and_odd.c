//sebin sebastian
//10/01/2021
//Write a program to print all odd numbers and even numbers from m to n.

#include <stdio.h>

int main()
{
    int m, n, p;
    printf("Enter starting value:");
    scanf("%d",&m);
    printf("Enter stop value:");
    scanf("%d",&n);
    p = m;
    printf("Odd number: ");
    while (m < n)
    {
        if(m % 2 != 0)
        {
            printf(" %d ",m);
        }
        m++;
    }
    
    printf("\nEven number: ");
    while (p < n)
    {
        if(p % 2 == 0)
        {
            printf(" %d ",p);
        }
        p++;
    }
    
}