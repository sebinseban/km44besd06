//sebin sebastian
//15/02/2022
//char * strcpy(char *s1,char *s2)
//copy s2 to s1 and return s1

#include <stdio.h>
char* strCpy( char* str1, char* str2);


int main()
{
    char str1[25], str2[25];
    printf("Enter string 1:");
    scanf("%24[^\n]s",str1);
    getchar();
    printf("Enter string 2:");
    scanf("%24[^\n]s",str2);

    char *ptr_string = strCpy( &str1[0], &str2[0]);    //sending out the address of the first element of str1 and str2 as arguement
    //now copy contents of str2 into str1   
    printf("String 1: %s\n", ptr_string);
}

//if you are receiving an address for array, then make here also the arguement as pointer to receive an address
char* strCpy( char* str1, char* str2)
{
    char* ptr = str1;
    while ( *str2 != '\0')
    {
        *str1 = *str2;
        str2++;
        str1++;
    }
    //end the string with null character
    *str1 = '\0';
    //return the starting address of the original array, %s can find null at end
    return ptr;
    
}


