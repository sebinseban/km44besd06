//sebin sebastian
//06/02/2022
//Write a program to compare 2 strings assuming case insensitive. 
//int stricmp (char s1[], char s2[]);

#include <stdio.h>

int stricmp (char s1[], char s2[]);


int main()
{
    char s1[25],s2[25];
    printf("String 1: ");
    scanf("%24[^\n]s",s1);
    getchar();
    printf("String 2: ");
    scanf("%24[^\n]s",s2);

    int value = stricmp(s1,s2);

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
        printf("String %s is smaller than string %s.\n",s1,s2);
    }
}

int stricmp (char s1[], char s2[])
{
    //for loop to convert all string to uppercase
    for (int i = 0; s1[i] != '\0' ; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z') 
        {
            s1[i] = s1[i] + 32;
        }
        if (s2[i] >= 'A' && s2[i] <= 'Z')
        {
            s2[i] = s2[i] + 32;
        }
    }

    int i;
    for (i = 0; s1[i] == s2[i] ; i++)
    {
        if ( s1[i] == '\0')
        {
            return 0;
        }
    }
    return s1[i] - s2[i];

}