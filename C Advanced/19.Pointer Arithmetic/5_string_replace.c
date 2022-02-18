//sebin sebastian
//15/02/2022
//char * strreplace(char *s1, char *s2, char *s3)
//replace every occurrence of string s2 with string s3 in main string s1, and return s1.

#include <stdio.h>
#include <string.h>

//char* strReplace( char* str1, char* str2, char* str3);
int strStr(char* str1, char* str2);

void replaceSub(char* str1, char* str3, int start, int end);


int main()
{
    char str1[125], str2[125],str3[125];
    printf("Enter main string: ");
    scanf("%124[^\n]s",str1);
    getchar();
    printf("Enter substring:");
    scanf("%124[^\n]s",str2);
    getchar();
    printf("Enter substring replacement: ");
    scanf("%124[^\n]s",str3);
    
    int start = strStr(&str1[0],&str2[0]);
    if (start == 0)
    {
        printf("No substring found.\n");
    }
    
    while( !( start == 0))
    {
        for(int i = 0; i < strlen(str1); i++)
        {   
            start = strStr(&str1[0],&str2[0]);
            int end = start + strlen(str3) - 1;
            replaceSub(&str1[0],&str3[0],start,end);
        }
    }
    printf("Final output: %s\n",str1);
    
}

int strStr(char* str1, char* str2)
{
    char* ptr = str2;
    int counter = 0;
    int size_str1 = strlen(str1);
    int size_str2 = strlen(str2);
    int i;
    for ( i = 0; i <size_str1 ; i++)
    {
        if (counter == size_str2)
        {
            ptr = str1 + i;
            break;
        }
        if (*(str2 + counter) == *(str1 + i) )
        {

            counter++;
        }
    }
    if (counter == size_str2)
    {
        return i - 1;
    }
    return  0;
}

void replaceSub(char* str1, char* str3, int start, int end)
{   
    int i = start;
    for(int j = 0; i <= end; i++)
    {
        *(str1 + i) = *( str3 + j);
        j++;
    }

}