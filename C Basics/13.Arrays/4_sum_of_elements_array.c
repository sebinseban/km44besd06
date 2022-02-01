//sebin sebastian
//01/02/2022
//Write a program to find the sum of all elements in an integer array, and print the sum.

#include <stdio.h>

int main()
{
    int size,sum = 0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];

    // Loop to accept n integers from user
    printf("Enter %d integers: ",size);
    for (int i = 0; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    // Loop to add n elements in an array
    for (int i = 0 ; i < size ; i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum of all %d elements are: %d\n",size,sum);
}