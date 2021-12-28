//sebin sebastian
//print user input integer in the given format using escape sequences
//4567
//456
//45
//4
#include <stdio.h>

int main()
{
    int x = 0;                           //declare,initialize the variable 
    printf("enter a 4 digit integer:");  //ask user for input
    scanf("%d", &x);   //store the user input in x
    printf("%d\n",x);                          // /b will move the cursor back by 1 position
    printf("%d\b \n",x);
    printf("%d\b\b  \n",x);
    printf("%d\b\b\b   \n",x);
}