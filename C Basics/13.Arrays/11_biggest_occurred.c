//sebin sebastian
//02/02/2022
//An array contains some numbers. You need to find out how many times the biggest number has occurred in that array in a single loop.
//(one loop to find the biggest and also to count the biggest)

#include <stdio.h>

int main()
{
    int size,biggest = 0,count = 0;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];

    // Loop for asking user for array elements
    printf("Array: ");
    for (int i = 0 ; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    // Loop to find the biggest and number of times it occurred in a single loop
    for (int i = 0 ; i < size ; i++)
    {
        if (arr[i] > biggest)
        {
            biggest = arr[i]; 
            // Reset the count variable every time a new biggest number is found
            count = 0;                        

        }
        // Check if the biggest occured number is occuring next
        if (biggest == arr[i+1])
        {
            count++;
        }


    }

    printf("The biggest element is %d and total times it occured is %d:\n",biggest,count+1);
}
