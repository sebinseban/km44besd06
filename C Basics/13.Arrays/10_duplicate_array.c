//sebin sebastian
//02/02/2022
//Write a code in C to receive an array of different integer values, and produce another array (list) of only the duplicated values in the original array, 
//if a duplicate value is found more than once, the list shall only show one value, order is not important.

#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];

    // Load values from user into the array
    printf("Array: ");
    for (int i = 0; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    //printf("\n");

    
}