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

    printf("%d\b\b\b\b   \n",x);
    printf("%d\b\b\b\b  \n",x);
    printf("%d\b\b\b\b \n",x);
    printf("%d\n",x);
}