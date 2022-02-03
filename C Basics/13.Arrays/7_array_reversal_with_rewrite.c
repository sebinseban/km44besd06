//sebin sebastian
//01/02/2022
/*Write a program to reverse an array and print it:  (change the contents of array to new reversed content and then print them)
Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1}; */

#include <stdio.h>

int main()
{
    //create a array of length n 
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n], arr_copy[n];

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

    // Loop to reverse the array and rewrite the contents of original array
    // why this loop doesnt work?
    // after midway, the first contents of array are getting rewritten anf you are accessing that rewritted values :)
    // thats why after midway, the elements are same
    // only solution, create a new array
    // new solution is to reverse the array without using another array
    //do this by swapping the first and last element
    //if even array, swap accordingly
    //if odd array , stop at middle
    
    //loop to create a copy of array into a new array
    /*
    for (int i = 0 ; i < n ; i++)
    {
        arr_copy[i] = arr[i];
    }


    int temp = n-1;
    for (int i = 0; i < n ; i++)
    {
        
        arr[i] = arr_copy[temp];
        temp--;
    } */
    for (int i = 0; )



    printf("Reversed array: ");
    for (int i = 0; i < n ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}