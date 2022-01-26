//sebin sebastian
//24/01/2022

/*Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers
 using the prime number function written above. return type should be void.
        PrintAllPrimes - return type is void. Should use IsPrime()
        Note: We can call anyfunction from any other function.*/

#include <stdio.h>

int isprime(int n)
{
    int i = 2, count = 0;
    while (i <=n/2)
    {
        if(n % i == 0)
                count++;
        i++;
    }
    if (count == 0)
    return n;
    else
    return 0;

}


void primeA(int n,int m)
{
    int k;
    for (; n <=m ; n++)
    {
        if (k = isprime(n))    ;
        printf("%d ",k);
    }
    printf("\n");
}


int main()
{
    int n,m;
    printf("Enter two numbers: ");
    scanf("%d %d",&n,&m);

    primeA(n,m);
    return 0;

}