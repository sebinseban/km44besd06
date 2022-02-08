#include <stdio.h>
#include <string.h>

int position,end;

int main()
{
    char str1[80], str2[80],str3[80];
    int l, i, j;

    printf("Enter first string: ");
    scanf("%s[^\n]",str1);

    printf("Enter second string: ");
    scanf("%s[^\n]",str2);

    printf("Enter second string: ");
    scanf("%s[^\n]",str3);



    //finding length of second string
    for (l = 0; str2[l] != '\0'; l++);

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
    

    if (j == l)
    {
        //printf("Substring found at position %d", i - j );
        position = i - j;
        end = strlen(str3) + position;
        for (int f = position ; str1[f] != '\0' ; f++)
        {
            str1[f] = str3[f];
        }
        
    }
    else
    {
        printf("Substring not found");
    }

    


    printf("%s\n",str1);

    return 0;
}