//sebin sebastian
//20/01/2022
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
    int input,count,temp2;
    printf("Enter height:");
    scanf("%d",&input);
    int temp  = input;
    temp2 = input;
    //temp3 = input;
    for (int i = 0; i < input  ; i++)
    {
        count = 0;
        count = i + 1;

        
        for(int k = 0; k < temp ; k++)
        {
            printf(" ");
        }
        temp--;
        
        
        if ( i % 2 == 0)
        {
            for (int j = 0; j < count; j++)
            {
                printf("* ");
            }
            
        }
        printf("\n");
      
        
        //temp2--;

        
        
    }
}