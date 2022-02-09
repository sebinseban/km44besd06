


#include <stdio.h>
#include <string.h>

int substringSearch( char str1[] , char str2[]);
void replace (char str1[], char str3[], int start, int end);

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
    getchar();0

    //block to print the contents of 3 strings
    //printf("%s\n",str1);
    //printf("%s\n",str2);
    //printf("%s\n",str3);

    //divide into subtasks
    //first find if the substring is in main string

    int start = substringSearch(str1, str2);

    if (start < 0)
    {
        printf("No match found.\n");
        return 0;
    }

    /*int end = start + strlen (str3) - 1;

    replace(str1, str3, start, end);

    printf("final output : %s\n",str1); */

    while (!(start < 0))
    {
        start = substringSearch(str1, str2);
        int end = start + strlen (str3) - 1;

        replace(str1, str3, start, end);

        
    }
    printf("final output : %s\n",str1);
    
}

//find length of a string
int strLen ( char str[])
{
    int i = 0 ; 
    while ( str[i] != '\0')
    {
        i++;
    }
    return i;
}

//function to find a substring is present or not

int substringSearch( char str1[] , char str2[])
{
    int k, i ,j ;
    for ( k = 0; str2[k] != '\0' ; k++)     //loop until the length of substring
    {
        for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
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
    if (j == k)
    {
        //printf("Substring found at position %d\n", i - j );
        return i - j;
    }
    else 
    {
        return -1;
    }
    
}

void replace (char str1[], char str3[], int start, int end)
{
    int i = start;
    for ( int j = 0 ; i <= end; i++ )
    {
        str1[i] = str3[j];
        j++;
    }
    //printf("%s\n",str1);
}