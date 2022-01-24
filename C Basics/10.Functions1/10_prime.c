//sebin sebastian
//23/01/2022
/*Write a function that can take an integer as input and return 1, if the number is prime number 
and 0 if it is not prime and print appropriate output message.
        return type is integer.
        IsPrime - returns int (0,1) */

#include <stdio.h>

int isPrime(int x)
{
    int count = 0;
    for (int i = 2; i <= x; i++)
    {
        if (x % i == 0)
            count++;
            return 1;
            
    }
    if (count == 1)
        return 1;

       
    
    else   
        return 0;
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if (isPrime(x) == 1)
        printf("Prime.\n");

    else
        printf("Not prime.\n");
    

}