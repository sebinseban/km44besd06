//sebin sebastian
//20/01/2022
/*      1
        2    3
        4    5   6
        7    8   9    10
        11   12  13   14  15  */

#include <stdio.h>

int main()
{
    int input;
    printf("Enter height:");
    scanf("%d",&input);

    int k = 0;
    for (int i = 0; i < input ; i++)
    {
        int count = 0;
        count = i + 1;
        for (int j = 0; j < count ; j++)
        {
            
            printf("%d ",++k);
        }
        printf("\n");
    }
}