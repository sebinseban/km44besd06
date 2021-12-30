//sebin sebastian
/*3)read a 4 digit number into a single integer variable and print it in the following formats using operators:
eg.> 4532
        OP1: 
        2
        3
        5
        4

        OP2:
        4
        5
        3
        2

        OP3:
        4
        45
        453
        4532

        OP4:
        4532
        453
        45
        4

        OP5:
        store the given number in another integer in reverse and print it
        2354 */

#include <stdio.h>
int main()
{
    int x = 0;
    int y = 0;
    printf("Enter a 4 digit integer:");
    scanf("%d", &x);
    y = x;
    printf("%d\n", y%10);
    y = y/10;
    printf("%d\n", y%10);
    y = y/10;
    printf("%d\n", y%10);
    y = y/10;
    printf("%d\n", y%10);

    printf("\n");
    
    y = x;
    printf("%d\n",y/1000);
    y = x/100; 
    printf("%d\n",y%10);
    y= x/10;
    printf("%d\n",y%10);
    printf("%d\n",x%10);
    
    printf("\n");

    y = x;
    printf("%d\n", y/1000);
    printf("%d\n", y/100);
    printf("%d\n", y/10);
    printf("%d\n", y);
    
    printf("\n");

    printf("%d\n",x);
    printf("%d\b \n",x);
    printf("%d\b\b  \n",x);
    printf("%d\b\b\b   \n",x);

    printf("\n");

    
}