//sebin sebastian
//04/02/2022
//Write a program to compare 2 strings.
//int strcmp (char s1[], char s2[]);

#include <stdio.h>

int strCmp( char s1[], char s2[]);

int main()
{
    int value;
    char s1[25], s2[25];
    printf("Enter string 1: ");
    scanf("%24[^\n]s",s1);
    getchar();
    printf("Enter string 2: ");
    scanf("%24s[^\n]",s2);

    value = strCmp(s1,s2);

    if (value == 0)
    {
        printf("String %s is equal to string %s.\n",s1,s2);
    }
    else if (value > 0)
    {
        printf("String %s is bigger than string %s.\n",s1,s2);
    }
    else 
    {
        printf("String %s is bigger than string %s.\n",s1,s2);

    }
}

int strCmp( char s1[], char s2[])
{
    int i;
    for ( i = 0; s1[i] == s2[i] ; i++ )
    {
        if (s1[i] == '\0')
        {
            return 0;
        }
        
    }
    return s1[i] - s2[i];
    
        
  
}