//sebin sebastian
//15/02/2022
//Declare a two dimensional array of elements for sales details of a store, for each item, 
//for each sales man. Take the sales values as input and print the array in matrix form.

#include <stdio.h>

#define ROW 4
#define COL 3

int main()
{
    int arr[ROW][COL];

    //taking user input into a 5x5 matrix
    for(int i = 0; i < ROW; i++)
    {
        for( int j =0; j < COL; j++)
        {
            printf("Enter value for sales[%d][%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    //printing sales by each sales man
    for(int i = 0 ; i < ROW ; i++)
    {
        int sum = 0;
        printf("Sales done my salesman %d: ",i + 1);
        for(int j = 0; j < COL; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("%d\n",sum);
        sum = 0;
    }

    //printing total sales of each item (coloums represent items)
    for(int i = 0; i < COL; i++)
    {
        int sum = 0;
        printf("Item %d total sold: ",i+1);
        for(int j = 0; j < ROW; j++)
        {
            sum = sum + arr[j][i];
        }
        printf("%d\n",sum);
        sum = 0;
    }

    //printing total sales
    int sum = 0;
    for(int i = 0; i < ROW; i++)
    {
        
        
        for(int j = 0; j < COL; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("Total sales: ");
    printf("%d\n",sum);
}