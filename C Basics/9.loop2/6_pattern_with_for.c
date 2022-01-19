//sebin sebastian
//19/01/2022
//Print the following patterns for a given n (number of rows)
/*        eg., n = 5
        *
        * *
        * * *
        * * * *
        * * * * *     */

#include <stdio.h>

int main()
{
    int input;
    printf("Enter height:");
    scanf("%d",&input);

    int size = 1;
    for (int i = 0; i < input; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("*");
        }
        size++;
        printf("\n");
    }
}