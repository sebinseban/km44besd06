//sebin sebastian
//09/02/2022
//Take three input integers x,y and z. 
//Write a program to rotate their values such that, x has the value of y, y has the value of z 
//and z has the value of x. Do this using pointers that point to x,y and z.

#include <stdio.h>

int main()
{
    printf("Enter three integers: ");
    int x,y,z,temp=0;
    int *p1,*p2,*p3,*p4;

    p1 = &x;
    p2 = &y;
    p3 = &z;
    p4 = &temp;

    scanf("%d %d %d",p1,p2,p3);

    *p4 = *p1;
    *p1 = *p2;
    *p2 = *p3;
    *p3 = *p4;
    printf("%d %d %d\n", *p1, *p2 , *p3);
}