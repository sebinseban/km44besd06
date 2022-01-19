//sebin sebastian
//19/01/2022
//    
/*      1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5 */


#include <stdio.h>

int main()
{
    int input;
    printf("Enter height:");
    scanf("%d",&input);
    

    for (int i = 0; i < input ; i++)
    {
        int count = 0;
        count = i + 1;
        for (int j = 0; j < count ; j++)
        {
            printf("%d ",count);
        }
        printf("\n");
    }
}