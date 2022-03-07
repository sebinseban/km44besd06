#include <stdio.h>

void strCat( char s[], char t[]);

int main()
{
    char d[20] = "nnnso";
    char s[] = "sebin sebastian";
    printf("Before: d: %s\n",d);
    strCat(d,s);
    printf("After: d: %s\n",d);
}
void strCat( char s[], char t[])
{
    int i, j;
    i = j = 0;

    while (s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0');
     
}
