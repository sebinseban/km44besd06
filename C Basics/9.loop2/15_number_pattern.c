//sebin sebastian
//20/01/2022
/*      5 5 5 5 5
        4 4 4 4
        3 3 3
        2 2
        1           */


#include <stdio.h>

int main()
{
    int input;
    printf("Enter height:");
    scanf("%d",&input);

    int temp = input;
    int count = input;
    for (int i = 0; i < input ; i++)
    {
        
        
        
        for (int j = 0; j < count; j++)
        {
            printf("%d ",temp);
            
        }
        count--;
        temp--;
        printf("\n");
    }
}