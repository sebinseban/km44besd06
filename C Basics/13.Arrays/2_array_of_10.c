//sebin sebastian
//01/02/2022
/*Declare an array of size 10. Enter 10 elements and save them in the array. 
Print the array. Find out the biggest and smallest numbers and their indexes and print the value. */

#include <stdio.h>

int main()
{
    // Declaring an array of size 10
    int arr[10], smallest , largest, subscript_smallest , subscript_largest ;


    // For loop for user to enter 10 values to the indexes 0 to 9 in array
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    // For loop to print the array contents
    for (int i = 0; i < 10 ; i++)
    {
        printf("%d\t",arr[i]);
    }

    // Two variables to compare with array contents and store the largest or smallest
    smallest = arr[0];
    
    largest = 0;

    
    for (int i = 0; i < 10 ; i++)
    {
        if ( arr[i] > largest)
        {
            largest = arr[i];
            subscript_largest = i;
        }
        if (!(arr[i] > smallest))
        {
            smallest = arr[i];
            subscript_smallest = i;
        }
    }
    printf("\nLargest: %d\nIndex of largest element is %d \n",largest,subscript_largest +1  );
    printf("Smallest: %d\nIndex of smallest element is %d\n",smallest, subscript_smallest+1);

    
}

