//sebin sebastian
//07/01/2022
//check if a character is alphabet or not

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c", &ch);

    (ch <= 'z' && ch >= 'a' || ch <='Z' && ch >= 'A') ? printf("Alphabet.\n") : printf("Not alphabet.\n");
}