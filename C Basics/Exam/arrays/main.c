//sebin sebastian
//07/02/2022


#include <stdio.h>

int multiply (int arr[], int size);
int division (int arr[], int arr2[],int divide,int size);

int main()
{
    int size;
    int divide = 0;
    
    printf("Enter array size:");
    scanf("%d",&size);
    int arr[size] , arr2[size];


    //for loop to accept array inputs
    printf("Array: ");
    for (int i = 0; i < size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    //call the multiply function
    divide = multiply(arr,size);

    //call the division function
    division(arr, arr2 , divide,size);
}


int multiply (int arr[], int size)
{
    int multiply = 1;
    for (int i = 0; i < size ; i++)
    {
        multiply = multiply * arr[i];
    }
    
    return multiply;
}

