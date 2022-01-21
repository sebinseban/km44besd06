// sebin sebastian
// 20/01/2022
/*              *
              * * *
            * * * * *
          * * * * * * *
        * * * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                *          */ 

#include <stdio.h>

int main()
{
    int input,count;
    printf("Enter input:");
    scanf("%d",&input);

    for(int i = 0; i < input ; i+2)
    {
        count = 0;
        count = i + 1;


        for (int k = 0; k < count; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
