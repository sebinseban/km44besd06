//sebin sebastian
//04/02/2022
//Write a program to implement the string concatenation functionality in a seperate function.
//void strcat (char s1[], char s2[]);

#include <stdio.h>

int strLen ( char str[]);
void strCat(char s1[], char s2[]);


int main()
{
    char s1[25],s2[25];
    printf("Enter string 1: ");
    scanf("%24[^\n]s",s1);
    getchar();
    printf("Enter string 2: ");
    scanf("%24[^\n]s",s2);
    
    printf("%s\n",s1);
    printf("%s\n",s2);

    strCat(s1,s2);
    printf("%s\n",s1);

}

void strCat(char s1[], char s2[])
{
    //all characters from array 2 are copied to the end of array 1
    //start from null character in array 1
    
    //first find null character position in array1
    //null character index is equal to the string lenght

    int result = strLen(s1);

    int i = 0;
    while ( s2[i] != '\0')
    {
        s1[result] = s2[i];
        i++;
        result++;
    }
    s2[i] = '\0';

}


int strLen ( char str[])
{
    int i = 0 ; 
    while ( str[i] != '\0')
    {
        i++;
    }
    return i;
}