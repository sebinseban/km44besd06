//sebin sebastian
//03/02/2022
//Input : array1 ={1,2,3,4,5};
//Output : array1 = {5,4,3,2,1};

#include <stdio.h>

int main()
{
    int size,temp;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int arr[size];

    //loop to enter array contents
    printf("Array[%d]: ",size);
    for (int i = 0 ; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    int last = size - 1;
    //loop to swap the first and last position of array
    for (int i = 0 ; i < size/2 ; i++)
    {
        temp = arr[i];
        arr[i] = arr[last];
        arr[last] = temp;
        last--;
    }
    
    // Loop to print the reversed array
    printf("Array reversed: ");
    for (int i = 0; i < size ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");


}