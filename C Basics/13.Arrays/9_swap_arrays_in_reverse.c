//sebin sebastian
//03/02/2022
/*Write a program to swap two arrays in reverse order.   
        array1 = {1,2,3,4,5};
        array2 = { 6,7,8,9,10};
        Output        
        array1 = {10,9,8,7,6}
        array2 = {5,4,3,2,1} */

#include <stdio.h>

int main()
{
    int temp,temp2,temp3, size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr1[size],arr2[size];
    
    // Loop to enter contents in to array 1
    printf("Array 1: ");
    for (int i = 0 ; i < size ; i++)
    {
        scanf("%d",&arr1[i]);
    }

    // Loop to enter contents in to array 2
    printf("Array 2: ");
    for (int i = 0 ; i < size ; i++)
    {
        scanf("%d",&arr2[i]);
    }


    // Reverse the first array and store into the first array itself
    // Reverse the second array and store into the second array itself
    int last = size - 1;
    for (int i = 0 ; i < size / 2 ; i++)
    {
        // block to reverse array 1 and store into array 1 itself
        temp = arr1[i];
        arr1[i] = arr1[last];
        arr1[last] = temp;
        
        // block to reverse array 2 and store into array 2 itself
        temp2 = arr2[i];
        arr2[i] = arr2[last];
        arr2[last] = temp2;
        last--;
    }

    for (int i = 0; i < size ; i++)
    {
        temp3 = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp3;
    }

    // Printing the reversed contents of both arrays
    printf("Array 1:");
    for (int i = 0 ; i < size ; i++)
    {
        printf("%d\t", arr1[i]);
    }
    printf("\n");
    printf("Array 2:");
    for (int i = 0 ; i < size ; i++)
    {
        printf("%d\t", arr2[i]);
    }
    printf("\n");


}