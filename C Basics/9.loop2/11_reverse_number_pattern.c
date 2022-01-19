//sebin sebastian
//20/01/2022
/*      5
        4 4
        3 3 3
        2 2 2 2
        1 1 1 1 1  */


#include <stdio.h>

int main()
{
    int input;
    printf("Enter height:");
    scanf("%d",&input);

    int new = input;

    for (int i = 0; i < input ; i++)
    {

        int count = 0;
        count = i + 1;

        for(int j = 0; j < count; j++)
        {
            printf("%d ",new);
            
        }  
        new--;
        printf("\n");      
    }
}
