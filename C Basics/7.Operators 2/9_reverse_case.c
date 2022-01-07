//sebin sebastian
//07/01/2022
//Input an alphabet. Output its case reverse.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c", &ch);

    if (ch <= 'z' && ch >= 'a' || ch <='Z' && ch >= 'A')
    {
        ch <= 'z' && ch >= 'a' ? printf("Case reverse of %c is %c\n", ch, ch-32) : printf("Case reverse of %c is %c\n", ch , ch + 32);
    }
    else 
    {
        printf("Not an alphabet.\n");
    }

    
}