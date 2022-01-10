//sebin sebastian
//06/01/2022
//Take three input integers x,y and z. 
//Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x.

#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter three integers:");
    scanf("%d %d %d",&x,&y,&z);

    z == x ? printf("%d",x): printf("%d",z);
    y == z ? printf("%d",z): printf("%d",y);
    x == y ? printf("%d",y): printf("%d",x);
}