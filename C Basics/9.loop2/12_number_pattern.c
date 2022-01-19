//sebin sebastian
//20/01/2022
/*      5
        5 4
        5 4 3
        5 4 3 2
        5 4 3 2 1   */

#include <stdio.h>

int main()
{
    int input;
    printf("Enter height: ");
    scanf("%d", &input);

    int new ;

    for (int i = 0; i < input ; i++)
    {
        int count = 0;
        count = i + 1;
        for (int j = 0,new = input; j < count; j++,new--)
        {
            printf("%d",new);
            
        }
        
        
        
        printf("\n");
    }
}