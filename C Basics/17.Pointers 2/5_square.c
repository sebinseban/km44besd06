//sebin sebastian
//10/02/2022
//Write a function that communicates with main using a single 
//static variable without taking any input arguments.
//every time the function is called, it will take a integer, square it and return it
#include <stdio.h>
int* square();

int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int* address_of_x;

    address_of_x = square();

    for(int i = 0; i < 10 ; i++)
    {
        *address_of_x = arr[i];
        square();
    }
    printf("%p\n",address_of_x);
}


int* square()
{
    static int x;
    if (x > 0)
    {
        printf("%d", x*x);
    }
    printf("Address: %p\n",&x);
    return &x;
}