//sebin sebastian
//15/02/2022
//char * strcat(char *s1, char *s2)
//concatenate s2 to s1 and return s1

#include <stdio.h>
#include <string.h>

char* strCat(char* str1, char* str2);



int main()
{
    char str1[250], str2[250];
    printf("Enter string 1:");
    scanf("%249[^\n]s",str1);
    getchar();
    printf("Enter string 2:");
    scanf("%249[^\n]s",str2);

    char* ptr = strCat(&str1[0], &str2[0]);
    printf("%s\n",ptr);
}

char* strCat(char* str1, char* str2)
{
    char* ptr2 = str1;
    int result = strlen(str1),result2 = strlen(str2);
    while (*str2 != '\0')
    {
        *(str1 + result) = *str2;
        str1++;
        str2++;
    }
    *(str1+result + result2) = '\0';
    return ptr2;   
}
    
