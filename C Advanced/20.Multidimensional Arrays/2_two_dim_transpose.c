//sebin sebastian
//15/02/2022
//Declare a two dimensional array of elements and find and print its transpose.

#include <stdio.h>
#define ROW 3
#define COL 2
int main()
{
    int arr[ROW][COL] = { 1,2,3,4,5,6};
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    //printing in transpose form
    printf("\nTranspose is: \n");
    for(int i = 0 ; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
        
}