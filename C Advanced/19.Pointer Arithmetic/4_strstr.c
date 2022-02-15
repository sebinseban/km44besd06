//sebin sebastian
//15/02/2022
/*char * strstr(char *s1, char *s2)
        match and return the address of substring s2 in s1
        eg., s1 : kernel masters
        s2: ers
        this returns &s1[11] as s1[11], s1[12] amd s1[13] are matching with ers.*/

#include <stdio.h>
#include <string.h>
char* strStr(char* str1, char* str2);

int main()
{
    char str1[125], str2[125];
    printf("Enter main string: ");
    scanf("%124[^\n]s",str1);
    getchar();
    printf("Enter substring: ");
    scanf("%124[^\n]s",str2);



    char* p = strStr(&str1[0],&str2[0]);
    if (p == 0)
    {
        printf("No substring found.\n");
    }
    else
    printf("%s\t adress: %p\n",p,&p);

}
char* strStr(char* str1, char* str2)
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
        return ptr;
    }
    return ptr = 0;
}