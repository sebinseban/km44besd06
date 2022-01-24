//sebin sebastian
//24/01/2022
//Write a function, that can take two integers as input, swap their values and print their new values.
//        return type should be void

#include <stdio.h>

void integerSwap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swap: %d \t %d ",a,b);
    return;
}

int main()
{
    int x,y;
    printf("Enter two integers: ");
    scanf("%d %d",&x,&y);

    integerSwap(x,y);
    return 0;
}