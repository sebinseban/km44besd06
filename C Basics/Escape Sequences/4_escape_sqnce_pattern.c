//sebin sebastian
//display  the user input in this pattern
//      output:  1234
//                  1
//                 34
//                234
//               1234

#include <stdio.h>

int main()
{
    int x = 0;
    printf("Enter a 4 digit integer: ");
    scanf("%d",&x);

    //implementation using escape sequence , \b
    printf("%d\b\b\b\b   \n",x);
    printf("%d\b\b\b\b  \n",x);
    printf("%d\b\b\b\b \n",x);
    printf("%d\n",x);
    
    printf("\n");
    //same functionality using escape sequence , \r
    printf("%d\r   \n",x);
    printf("%d\r  \n",x);
    printf("%d\r \n",x);
    printf("%d\n",x);

    //same functionality using operator
    printf("\n");
    printf("   %d\n", x%10);
    printf("  %d\n", x%100);
    printf(" %d\n", x%1000);
    printf("%d\n",x);
}