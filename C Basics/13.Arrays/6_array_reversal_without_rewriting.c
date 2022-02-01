//sebin sebastian
//01/02/2022
/*Write a program to print an array in reverse order. Do not change the contents of array 1 (don't rewrite)
Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1}; */

#include <stdio.h>

int main()
{
    //create a array of length n 
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    // Loop to accept n inputs
    printf("Enter %d elements: ",n);
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");

    // Loop to print out the original array
    printf("Original array: ");
    for (int i = 0; i < n ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    // Loop to reverse and print the contents of array
    printf("Reversed array: ");
    for (int i = n-1 ; i >=0 ; i--)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

}


