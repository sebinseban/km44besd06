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

    for (int i = 0; i < input; i++)
    {
        int count = 0;
        count = i + 1;
        int binary = 1;

        for (int j = 0; j < count ; j++)
        {
            printf("%d",binary);
            binary--;


        }
        printf("\n");
    }
}