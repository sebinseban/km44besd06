//sebin sebastian
//23/01/2022
// Write a function that takes two numbers, 
//a and n as input arguments and returns the value of a to the power of n.

#include <stdio.h>

int powerFunction( int a, int b)
{
    int power = 1;
    if (a == 0)
    {
        return 1;
    }
    for (int i = 0; i < b; i++)
    {
        power = power * a;
        
    }
    return power;
}

int main()
{
    int a,n;
    printf("Enter digit and exponent: ");
    scanf("%d %d",&a,&n);
    printf("Power is : %d\n",powerFunction(a,n));


}