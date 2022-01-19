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
    printf("Enter the height of pattern(number of rows): ");
    scanf("%d",&input);
    int i = 0;
    int size = 1;
    while ( i < input)
    {   
        int j = 0;
        
        while ( j < size )
        {
            printf("*");
            j++;
            
            
        }
        size++;

        printf("\n");
        
        
        
        i++;
    }
}