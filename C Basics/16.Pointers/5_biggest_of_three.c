//sebin sebastian
//09/02/2022
//Write a program to find the biggest of three numbers using pointers that point to those numbers.

#include <stdio.h>

int main()
{
    int x,y,z;
    int *p1,*p2,*p3;
    p1 = &x;
    p2 = &y;
    p3 = &z;
    printf("Enter three integers: ");
    scanf("%d %d %d",p1,p2,p3);
    

    if ( *p1 >= *p2 && *p1 >= *p3 )
    {
        printf("%d is the biggest.\n",*p1);
    }
    if ( *p2 >= *p1 && *p2 >= *p3)
    {
        printf("%d is the biggest.\n",*p2);
    }
    if ( *p3 >= *p1 && *p3 >= *p2)
    {
        printf("%d is the biggest.\n",*p3);
    }
}