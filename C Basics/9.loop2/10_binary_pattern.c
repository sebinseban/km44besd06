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
    int input,p;
    printf("Enter height: ");
    scanf("%d",&input);

    for (int i = 1; i < input; i++)
    {
       if(i % 2 == 0)
       {
            p = 1;
       } 
       else
       {
           p = 0;
       }

       for ( int j = 1; j <=i ; j++)
       {
           printf("%d",p = !p);
       }
       printf("\n");

        
            


       
    }
}