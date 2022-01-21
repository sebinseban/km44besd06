//sebin sebastian
//19/01/2022
/*      1
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1   */

#include <stdio.h>

int main()
{
    int input;
    printf("Enter height: ");
    scanf("%d",&input);

    for (int i = 1; i < input; i++)
    {
        
        

        for (int j = 1; j < i ; j++)
        {
            if ( i % 2 == 0 && j%2 == 0|| (i %2 != 0 && j % 2 != 0)
            {
                printf("1");

            }
            else
            {
                printf("0");
            }
            


        }
        printf("\n");
    }
}