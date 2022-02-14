//sebin sebastian
//14/02/2022
//WAP to print a range of prime numbers. Use macro,to find if a number is prime or not.

#include <stdio.h>

#define isPrime(start,stop) for(int i = 2; i <= start/2; i++)\
        {\
        if(start % i == 0)\
            {\
                flag = 1;\
                break;\
            }\
        }\

int main()
{
    int start,stop,flag;
    printf("Enter starting range and stop range: ");
    scanf("%d %d",&start,&stop);

    for ( ; start < stop ; start++)
    {
        flag = 0;
        if (start == 1)
            {
                flag = 1;
            }

        isPrime(start,stop)
        if (flag == 0)
        {
            printf("%d \n",start);
        }
    }


}