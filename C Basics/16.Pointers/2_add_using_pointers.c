//sebin sebastian
//09/02/2022
//Write a program to add two variables using their pointers.

#include <stdio.h>

int main()
{
    int x, y;
    int *p1, *p2;
    p1 = &x;
    p2 = &y;
    printf("Enter two integers: ");
    scanf("%d %d",p1,p2);
    
    
    printf("Sum of x and y using pointers: %d + %d = %d\n",*p1,*p2, *p1 + *p2);

}