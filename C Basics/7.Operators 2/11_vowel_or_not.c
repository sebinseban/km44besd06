//sebin sebastian
//07/01/2022
//check if a character is vowel or not

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);

    if (ch <= 'z' && ch >= 'a' || ch <='Z' && ch >= 'A')
    {
        ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ? printf("Vowel.\n") : printf("Not vowel.\n");

    }
    else
    {
        printf("Enter a valid alphabet.");
    }
}