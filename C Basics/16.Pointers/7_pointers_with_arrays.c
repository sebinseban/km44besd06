//sebin sebastian
//09/02/2022
//Declare an integer array of size 10 and initialize it to some values. 
//Print the addresses of each element of the array using a pointer. 
//Using indirection operator , print the value stored in each element of the array.

#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr ;
    ptr = arr;

    for (int i = 0 ; i < 10 ; i++)
    {
        printf("address of arr[%d] %p %d\n",i,ptr,*ptr);
        ptr++;
    }

}