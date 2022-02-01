//sebin sebastian
//01/02/2022
/*Write the following program : 

    Declare an integer array of size 100.
    Assign numbers 1-100 to each element of the array.
    Print all the numbers.
    Print all even elements.
    Print all odd elements.
    Add 5 to each element and print 6 – 105 numbers. */

#include <stdio.h>

int main()
{
    // Declare an array of 100 elements
    int arr[100];                      

    // Loop to assign values of 1 to 100 in indexes 0 to 99 of array arr[]
    for (int i = 0; i < 100; i++)
    {  
        arr[i] = i + 1;
        
    }

    // Loop to print values of indexes 0 to 99 of array arr[]
    printf("Values in array locations from 0 to 99\n");
    for (int i = 0; i < 100 ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    // Loop to print all the even elements(not even indexes) of arr[100]
    // Divide each element of arr to find the even values that it holds in each index
    printf("All even elements: \n");
    for (int i = 0; i < 100; i++)
    {
        if ( arr[i] % 2 == 0)
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");


    // Loop to print all the odd elements (not odd indexes) of arr[100]
    // apply ! to the logic to find even numbers
    printf("All the odd elements: \n");
    for (int i = 0; i < 100; i++)
    {
        if (! (arr[i] % 2 == 0))
        {
            printf("%d\t",arr[i]);
        }
    }
    printf("\n");
    
    // Adding 5 to each elements in the arrays ranging from index 0 to 100 
    printf("Values of each index from 6 to 105 after adding 5: \n");
    for (int i = 0 ; i < 100 ; i++)
    {
        arr[i] = arr[i] + 5;
    }
    // Printing values of each index from 6 to 105
    for (int i = 6; i < 105 ; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");


    
}