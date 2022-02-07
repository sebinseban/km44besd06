//sebin sebastian
//06/02/2022
//Write a program to compare 2 strings only upto the first n character specified by the user. 
//int strncmp (char s1[], char s2[], int n);

#include <stdio.h>
int strncmp (char s1[] , char s2[], int n);
int main()
{
    int n;
    char s1[25],s2[25];
    printf("String 1: ");
    scanf("%24[^\n]s",s1);
    getchar();
    printf("String 2: ");
    scanf("%24[^\n]s",s2);
    printf("Enter limit : ");
    scanf("%d",&n);

    int value = strncmp(s1,s2,n);
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

int strncmp (char s1[] , char s2[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
    }
    return 0;
}