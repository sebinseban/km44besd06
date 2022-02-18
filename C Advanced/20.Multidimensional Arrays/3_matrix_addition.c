//sebin sebastian
//16/02/2022
//Write a program  for matrix addition and subtraction.

#include <stdio.h>
#define ROW 3
#define COL 3

int main()
{
    int arr1[ROW][COL] = {1,2,3,4,5,6,7,8,9};
    int arr2[ROW][COL] = {1,2,3,4,5,6,7,8,9};
    int arr3[ROW][COL] = {5,96,17,11,209,3,8,19,26};

    //matrix addition of two matrices
    printf("Addition of matrix 1 and matrix 2: \n");
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL ; j++)
        {
            arr1[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    //subracting matrix 3 from matrix 3
    printf("Subtraction of matrix 3 and matrix 2: \n");
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL ; j++)
        {
            arr3[i][j] = arr3[i][j] - arr2[i][j];
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }

    

}

/*printing the matrix after subtraction
    
    for(int i = 0; i < ROW; i++)
    {
        for( int j =0; j < COL; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }*/
    /*printing the matrix after addition
    
    for(int i = 0; i < ROW; i++)
    {
        for( int j =0; j < COL; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }*/