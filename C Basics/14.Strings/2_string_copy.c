//sebin sebastian
//04/02/2022
//Write a program to implement the string copy functionality in a seperate function.
//void strcpy (char s1[], char s2[];

#include <stdio.h>

void strCpy (char s1[], char s2[]);

int main()
{
    char s1[25], s2[25];
    printf("Enter string 1: ");
    scanf("%24[^\n]s",s1);
    printf("Enter string 2: ");
    getchar();
    scanf("%24[^\n]s",s2);

    //printf("String 1: %s\n",s1);
    //printf("String 2: %s\n",s2);
    
    strCpy(s1,s2);
    printf("String 1: %s\n",s1);


    
}

char * strCpy (char s1[], const char s2[])
{
    int i = 0; 
    while ( s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    // Ending the string with null character at end
    s2[i+1] = '\0';   
}
