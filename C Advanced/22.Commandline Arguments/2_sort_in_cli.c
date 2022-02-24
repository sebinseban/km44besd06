//sebin sebastian
//21/02/2022
//sort the list of names received on command
// line argument and print them in ascending or descending order based on option -r.

#include <stdio.h>
#include <stdlib.h>

void sort(char **argv, int argc);
void strCpy (char *s, char *t);
int strCmp (char *s, char *t);

int main(int argc, char * argv[])
{
    if (argc >= 2)
    {
        
        sort(argv, argc);

        printf("After sorting:\n");

        if (strCmp (argv[1], "-r") == 0)
        {
            for(int i = argc; i > 1; i--)
            {
                printf("%s\n",argv[i]);
            }
        }

        else 
        {
            for(int i = 1; i < argc; i++)
            {
                printf("%s\n",argv[i]);
            }
        }
        

    }
    else 
    {
        printf("Enter enough command line arguments.\n");
    }
}
void sort(char **argv, int argc)
{
    int i,j;
    for(i = 1 ;i < argc - 1; i++)
    {
        for(j = 1; j < argc - 1 - i; j++)
        {
            if (strCmp(argv[j], argv[j+1]) > 0)
            {
                char *temp;
                temp = (char*)malloc(100 * sizeof(char));
                strCpy(temp, argv[j]);
                strCpy(argv[j], argv[j+1]);
                strCpy(argv[j + 1],temp);
            }
        }
    }
}
int strCmp (char *s, char *t)
{
    int i;
    for(i = 0; s[i] == t[i]; i++)
    {
        if(s[i] == '\0')
        {
            return 0;
        }
    }
    return s[i] - t[i];
}

void strCpy (char *s, char *t)
{
    
    while ((*s++) = (*t++))
        ;
}