//sebin sebastian
//17/02/2022
//Sort an array of integers in ascending
//order using adjacent element comparison and swapping (bubble sort algorithm)

#include <stdio.h>
void bubbleSort (int * arr);
void swap ( int* arr);


#define SIZE 10
int main()
{
    int arr[SIZE] = {5,3,4,1,2,123,23,46,7,344};
    //directly call the function, do the swapping with another function inside bubble sort function
    bubbleSort(&arr[0]);

    for( int i = 0; i < SIZE; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}


void bubbleSort (int * arr)
{
    for (int i = 0;  i <= SIZE - i - 1 ; i++)
    {
        for(int j = 0; j <= SIZE - i - 2 ; j++)
        {
            if ( arr[j] > arr[j + 1])
            {
                swap(&arr[j]);
            }
        }

    }
}

void swap( int* arr)
{
    int temp ;
    temp = arr[0];
    arr[0] = arr[0 + 1];
    arr[0+1] = temp;
}