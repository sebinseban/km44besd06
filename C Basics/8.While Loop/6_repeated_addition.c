//sebin sebastian
//16/01/2022
//Find the product of 2 numbers without using multiplication symbol (use repeated addition)

#include <stdio.h>

int main()
{
    int m,n,sum = 0;
    printf("Enter 2 numbers to be multiplied:");
    scanf("%d %d",&m,&n);

    while (m > 0)
    {
        sum = sum + n;
        m--;
    }
    printf("Repeated addition: %d\n",sum);
}