//find the biggest in an array
//how many times the biggest occured


#include <stdio.h>

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];

    //loop to accept user input
    printf("Enter array elements:");
    for (int i = 0 ; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    
    int biggest = 0;
    int count = 0;
    for (int i = 0 ; i < size ; i++)
    {   
        if (arr[i] >= biggest )
        {
            biggest = arr[i];
        }

        if (biggest == arr[i + 1])
        {
            count++;
        }
    }


    printf("The biggest element is : %d\n", biggest);
    printf("Occured %d times \n", count);
    
}