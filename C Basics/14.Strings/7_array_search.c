//sebin sebastian
//04/02/2022
//Write a program to search a char inside an array and print its index.
//int strchr (char s[], char c);

#include <stdio.h>

int strChr(char s[], char c);

int main()
{
    int result;
    char c;
    char s[25];
    printf("Enter character to be searched: ");
    scanf("%c",&c);
    printf("Enter a string: ");
    getchar();
    scanf("%24[^\n]s",s);

    
    result = strChr(s,c);
    if (result >= 0)
    {
        printf("Found at index %d\n. i.e location is %d\n",result,result + 1);
    }
    else 
    {
        printf("Not found.\n");
    }
}

int strChr(char s[], char c)
{
    for (int i = 0 ; s[i] != '\n' ; i++)
    {
        if (c == s[i])
        {
            return i;
        }
    }
    return -1;

}