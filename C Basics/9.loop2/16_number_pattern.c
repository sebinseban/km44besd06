//sebin sebastian
//20/01/2022
/*      1 2 3 4 5
          2 3 4 5
            3 4 5
              4 5
                5   */

#include <stdio.h>

int main()
{
    int input;
    printf("Enter height:");
    scanf("%d",&input);

    int temp = input;
    int j;
    for (int i = 0; i < input; i++)
    {
        int count = 0;
        count = i + 1;
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (; j < temp ; j++)
        {
            printf("%d",j);
        }
    
        
        //temp--;
        printf("\n");
    }
}