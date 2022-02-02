//sebin sebastian
//02/02/2022
/*Write a program to swap two arrays in reverse order.
        array1 = {1,2,3,4,5};
        array2 = { 6,7,8,9,10};
        Output
        array1 = {10,9,8,7,6}
        array2 = {5,4,3,2,1}  */

#include <stdio.h>

int main()
{
    int size,temp_value;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr1[size], arr2[size],temp1[size],temp2[size];

    // Loop to input values in array 1
    printf("array 1: ");
    for (int i = 0; i < size ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    //printf("\n");

    // Loop to input values in array 2
    printf("array 2: ");
    for (int i = 0; i < size ; i++)
    {
        scanf("%d",&arr2[i]);
    }

    // Copy contents of array 1 to temporary array
    // Copy contents of array 2 to temporary array
    for (int i = 0 ; i < size ; i++)
    {
        temp1[i] = arr1[i];
        temp2[i] = arr2[i];
    }

    // Store the reversed contents of array 1 in array 2
    // Store the reversed contents of array 2 in array 1
    temp_value = size - 1;
    for (int i = 0 ; i < size ; i++)
    {
        arr2[i] = temp1[temp_value];
        arr1[i] = temp2[temp_value];
        temp_value--;
    }

    // Print out the new contents of array1 and array2
    printf("Array 1 reversed: ");
    for (int i = 0 ; i < size ; i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n");
    printf("Array 2 reversed: ");
    for (int i = 0 ; i < size ; i++)
    {
        printf("%d\t",arr2[i]);
    }
    printf("\n");

}

