//sebin sebastian
//02/01/2021
// Read a 4 digit integer and print it in the below format:
/*
        input: 3465

        output:
         5
        6 5
       4 6 5
      3 4 6 5                        */

#include <stdio.h>
int main()
{
    int x = 0;
    printf("Enter a 4 digit integer:");
    scanf("%d",&x);

    printf("   %d   \n",x%10);
    printf("   %2d  \n", x %100);
    printf("%3d\n",x%1000);
    printf("%4d\n",x);

}