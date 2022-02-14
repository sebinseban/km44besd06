//sebin sebastian  
//14/02/2022
//WAP to print if  a character is alphanumeric , using nested macros.

#include <stdio.h>

#define isSmall(c) ((c >= 97) && (c <= 122))
#define isBig(c) ((c >= 65) && (c <= 90))
#define isAlpha(c) isSmall(c)||isBig(c)

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if (isAlpha(ch) == 1)
    {
        printf("Alphabet.\n");
    }
    else
    {
        printf("Not alphabet.\n");
    }
    

}
