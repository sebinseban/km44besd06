//sebin sebastian
//10/02/2022
//Write two source files, main.c and swap.c. The main function initializes a two-element 
//array of ints, and then calls the swap function to swap the pair.

#include <stdio.h>
void swap(int* arr);

int main()
{
    int arr[2] = {100,200};

    swap(arr);
    printf("%d %d\n",arr[0],arr[1]);

}

