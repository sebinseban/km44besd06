//sebin sebastian
//02/01/2021
// Read a 4 digit integer and print it in the below format:
/*
        input: 3465

        output:
         5
        65
        465
        3465                        */

#include <stdio.h>
int main()
{
    int x = 0;
    printf("Enter a 4 digit integer:");
    scanf("%d",&x);

    printf("%7d\n",x%10);
    printf("%d \n",x);

}