//sebin sebastian
//09/02/2022
/*Write a program to print the address of a variable , its value ,its size, 
try different executions and note the address printed. 
Assign the address of the variable to a pointer variable.
Print the sizes of pointer and its indirected expression(apply * operator). */

#include <stdio.h>

int main()
{
    int x = 5;
    int *p;
    printf("Address of %d is %p.\n",x,&x);
    printf("Size of variable x is %lu.\n",sizeof(x));

    p = &x;
    printf("Indirect access of x = %d.\n",*p);
    printf("Size of pointer variable: %lu\n",sizeof(*p));
}