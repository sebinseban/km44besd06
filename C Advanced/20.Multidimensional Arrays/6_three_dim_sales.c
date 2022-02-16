//sebin sebastian
//16/02/2022
//Declare a three dimensional array of elements for sales details of a store, for x number of items, 
//sold by y number of sales men , for a period of z number of days.

#include <stdio.h>

#define DAYS 3
#define MEN 3
#define ITEMS 3

int main()
{
    int arr[DAYS][MEN][ITEMS];
    //taking user input into a 3x3x3 matrix
    for(int i = 0; i < DAYS; i++)
    {
        for( int j =0; j < MEN; j++)
        {
            for(int k = 0; k < ITEMS  ; k++)
            {
                printf("Enter value for sales[%d][%d]: ",i,j);
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("Sales for each day in matrix form:\n");
    for(int i = 0; i < DAYS; i++)
    {
        for( int j =0; j < MEN; j++)
        {
            for(int k = 0; k < ITEMS  ; k++)
            {
                printf("[%d][%d][%d]:%d \t",i,j,k,arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    //total sales by each salesmen
    printf("Total sales by each sales man \n");
    int sales = 0;
    for(int i = 0; i < DAYS; i++)
    {
        for( int j =0; j < MEN; j++)
        {
            int k;
            for( k = 0; k < ITEMS  ; k++)
            {
                sales = sales + arr[i][j][k];
            }
            printf("Total sales by salesman %d at day %d: %d\n",j+1,i+1,sales);
            sales = 0;
        }
    }

    //total sales of each item per day
    sales = 0;
    for(int i = 0; i < DAYS; i++)
    {
        for( int j =0; j < ITEMS; j++)
        {
            int k;
            for( k = 0; k < MEN  ; k++)
            {
                sales = sales + arr[i][k][j];
            }
            printf("Total sales of item %d : %d\n",j,sales);
            sales = 0;
        }
    }
    
}