//sebin sebastian
//20/01/2022
/*              5
              4 4
            3 3 3
          2 2 2 2
        1 1 1 1 1   */

#include <stdio.h>

int main()
{
    int input;
    printf("Enter height:");
    scanf("%d",&input);

    int new = input;
    int new2 = input;

    for (int i = 0; i < input ; i++)
    {
        int count = 0;
        count = i + 1;

        for (int k = 1; k < new2; k++)
        {
            printf(" ");
        }
        new2--;
        for (int j = 0; j < count ; j++)
        {
            printf("%d",new);
        }

        
        new--;
        printf("\n");
    }
}