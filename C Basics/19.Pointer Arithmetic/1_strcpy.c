//sebin sebastian
//15/02/2022
//char * strcpy(char *s1,char *s2)
//copy s2 to s1 and return s1

#include <stdio.h>
void strCpy( char* str1, char* str2);


int main()
{
    char str1[25], str2[25];
    printf("Enter string 1:");
    scanf("%24[^\n]s",str1);
    getchar();
    printf("Enter string 2:");
    scanf("%24[^\n]s",str2);

    strCpy( &str1[0], &str2[0]);    //sending out the address of the first element of str1 and str2 as arguement
    //now copy contents of str2 into str1   
    printf("String 1: %s\n", str1);
}

//if you are receiving an address for array, then make here also the arguement as pointer to receive an address
void strCpy( char* str1, char* str2)
{
    int i = 0;
    while ( *(str2 + i) != '\0')
    {
        *(str1 + i) = *(str2 + i);
        i++;
    }

    str1[i] = '\0';  //end the string with null character
}


