//sebin sebastian
//14/02/2022
//Write down a macro to find the biggest of two numbers.
//Using this macro , write a macro to find biggest of 3 numbers.

#include <stdio.h>

#define MAX(x,y) x>y?x:y

int main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Biggest: %d\n", MAX( MAX(a,c) , MAX(b,c)));
}

/*#define MAX(a,b,c) (a>b&&a>c?a:b>c?b:c)
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Biggest: %d\n",MAX(a,b,c));
}*/