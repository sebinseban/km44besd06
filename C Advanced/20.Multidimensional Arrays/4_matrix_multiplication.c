//sebin sebastian
//16/02/2022
//Write a program  for matrix multiplication.

#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int arr1[ROW][COL] = {1,2,3,4,5,6,7,8,9};
    int arr2[ROW][COL] = {1,2,3,4,5,6,7,8,9};

    //multiplying matrix 1 with matrix 2
    //printing in the same block itself
    printf("After matrix multiplication:\n");
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            arr1[i][j] = arr1[i][j] * arr2[i][j];
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
}