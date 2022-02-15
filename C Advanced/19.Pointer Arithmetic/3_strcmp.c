//sebin sebastian
//15/02/2022
//int strcmp(char *s1, char *s2)
//compare s1 and s2 and return the difference in numbers

#include <stdio.h>

int strCmp(char* str1, char* str2);


int main()
{
    char str1[250], str2[250];
    printf("Enter string 1: ");
    scanf("%249[^\n]s",str1);
    getchar();
    printf("Enter string 2: ");
    scanf("%249[^\n]s",str2);

    int result = strCmp( &str1[0],&str2[0]);
    printf("Value: %d\n",result);
}

int strCmp(char* str1, char* str2)
{
    int i;
    for (i = 0; *(str1+i) == *(str2+i); i++)
    {
        if (*(str1 + i) == '\0')
        {
            return 0;
        }
    }
    return *(str1+i) - *(str2 + i);
}
