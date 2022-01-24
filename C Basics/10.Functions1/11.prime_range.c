//sebin sebastian
//24/01/2022

/*Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers
 using the prime number function written above. return type should be void.
        PrintAllPrimes - return type is void. Should use IsPrime()
        Note: We can call anyfunction from any other function.*/

#include <stdio.h>

void printAllPrimes (int a)
{
    printf("Prime number: %d \t",a);
    return ;
}

int isPrime(int x,int y)
{
    int  i, count = 0;
    for (; x <= y; x++)
    {
        for (i = 2; i < x; i++)
        {
        if (x % i == 0)
            count++;
            break;
        }
        if (i == count)
        {
            printAllPrimes(x);
        }

    }
    
    
       
    
    return 0;
}


int main()
{
    int x,y;
    printf("Enter start and stop limit: ");
    scanf("%d %d",&x,&y);

    isPrime(x,y);
    return 0;

}