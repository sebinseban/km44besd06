#include <stdio.h>

int division (int arr[], int arr2[], int divide,int size)
{
    for (int i = 0; i < size ; i++)
    {
        arr2[i] = divide / arr[i];
    }

    //for loop to print contents of array 2
    printf("Array 2: ");
    for (int i = 0 ; i < size ; i++)
    {
        printf("%d\t",arr2[i]);
    }
    printf("\n");
    return 0;
}