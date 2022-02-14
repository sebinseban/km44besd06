//sebin sebastian
//14/02/2022
//Write down a macro to find out the biggest of two numbers. 
//MAX(x,y) should define code to find biggest of x and y.

#include <stdio.h>

#define MAX(x,y) x>y?x:y

int main()
{
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    printf("Biggest: %d\n",MAX(a,b));
}
