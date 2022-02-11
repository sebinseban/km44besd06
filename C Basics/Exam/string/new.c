
#include <stdio.h>
#include <string.h>
int substring (char str1[], char str2[]);
void replaceChar (char str1[], char str3[],int start, int stop);

int start;
int main()
{

    char str1[] = "kernel masters is open everyday";
    char str2[] = "er";
    char str3[] = "12";


    start = substring(str1, str2);

    while ( !(start < 0))
    {
        start = substring(str1, str2);
        int end = start + strlen (str3) -1;

        replaceChar(str1 , str3,start,end);
    }

    printf("New string: %s\n",str1);
}

int substring (char str1[], char str2[] )
{
    int k, i , j;

    for (int k = 0 ; str2[k] != '\0' ; k++)
    {
        for (i = 0, j = 0 ; str1[i] != '\0' && str2[j] != '\0' ; i++)
        {
            if (str1[i] == str2[j])
            {
                j++;
            }
            else 
            {
                j = 0;
            }
        }
    }
    
    if ( j== k)
    {
        return i- j;
    }
    else 
    {
        return -1;
    }
}

void replaceChar (char str1[],char str3[],int start, int stop)
{
    int i = start;
    
    for (int j = 0;  i <= stop; i++)
    {
        str1[i] = str3[i];
        j++;
    }
}