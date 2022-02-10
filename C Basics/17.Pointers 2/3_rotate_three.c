//sebin sebastian
//10/02/2022
//Write a function that can rotate the values of three variables. print the results in main function.

#include <stdio.h>

void swap(int* x, int* y, int* z);

int main()
{
    int x,y,z;
    printf("Enter three integers in x, y and z: ");
    scanf("%d %d %d",&x,&y,&z);

    swap(&x,&y,&z);
    printf("After rotating x:%d y:%d z:%d\n",x,y,z);
}

void swap(int* x, int* y, int* z)
{
    int temp;
    temp = *x;
    *x = *z;
    *z = *y;
    *y = temp;
}