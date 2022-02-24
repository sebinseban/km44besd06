//sebin sebastian
//23/02/2022
/*Create a 2 dimentional array of characters using a character pointer array 
(number of strings fixed).
 Each string length can be different (upto maximum 100), read it from the user.
Create memory for each string upto required size only. 
Sort the strings and print. */

#include <stdio.h>
#include <stdlib.h>

void sort (char **s);
void strCpy (char *s, char *t);
int strCmp (char *s, char * t);


#define ROW 10
#define COL 100

int main()
{
    int i, j;

    
    char ** arr = (char **)malloc(ROW * sizeof(char*));

    for(i = 0;  i < ROW; i++)
        arr[i] = (char *)malloc(COL * sizeof(char));

    for(i = 0; i < ROW + 1 ; i++)
        scanf(" %[^\n]s",arr[i]);
    printf("\n\n");

    for(i = 0; i < ROW ; i++)
    {
        printf("%s\n",arr[i]);
    }

    sort(arr);
    printf("Array After sorting:\n ");
     for(i = 0; i < ROW ; i++)
    {
        printf("%s\n",arr[i]);
    }
    
    return 0;
}
void sort (char **arr)
{
    int i, j;
    for ( i = 0; i < ROW - 1 ; i++)
    {
        for ( j = 0; j < ROW -i - 1; j++)
        {
            /*int r = strCmp(s[j], s[j+1]);
            if (r > 0)*/
            if (strCmp(arr[j], arr[j+1]) > 0)
            {
                char *temp;
                temp = (char*)malloc(100 * sizeof(char));
                strCpy(temp, arr[j]);
                strCpy(arr[j], arr[j+1]);
                strCpy(arr[j + 1],temp);
            }
        }
    }
}

int strCmp (char *s, char * t)
{
    int i;
    for (i =0; s[i] == t[i]; i++)
    {
        if (s[i] == '\0')
            return 0;
    }
    return s[i] - t[i];
}

void strCpy (char *s, char *t)
{
    
    while (*s++ = *t++)
        ;
}