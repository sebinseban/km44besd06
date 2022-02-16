//sebin sebastian
//16/02/2022
//Search for an element in a two dimentional array, and print its position - as row and column numbers

#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int number;
    int arr[ROW][COL] = {1,2,3,4,4,6,7,8,9};
    printf("Enter a integer to search in array: ");
    scanf("%d",&number);

    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            if(arr[i][j] == number)
            {
                printf("Found at arr[%d][%d]\nRow: %d\nColumn:%d\n",i,j,i,j);
                return 0;  //this is not a good practise, implement a function and return value to main
            }
        }
    }
    printf("Not found.\n");
    



}