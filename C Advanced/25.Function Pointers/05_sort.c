//sebin sebastian
//06/03/2022
/*sort the list of names received on command line argument and print them 
in ascending or descending order / comparison with case or without case 
based on options -r & -i. Use function pointers to choose which 
function (strasc/strdesc , strcmp/stricmp) to call based on the option. */


#include <stdio.h>

int checkArgv( char **s, char *cla1,int argc);
int strCmp (char *s, char *t);

int main(int argc, char * argv[])
{
    if (argc >= 2)
    {
        //first check if -r and -i is present in the array argv[], will return the index of starting
        int result = checkArgv(argv, "-r", argc);
        printf("Index: %d\n",result);
    }

    else
    {
        printf("Enter atleast 1 name.\n");
    }
    
}

//this function will check if -r or -i is present as commandline argument
int checkArgv( char **s, char *cla1, int  argc)
{   
    int i,j;
    for(i = 1; i < argc -1 ; i++)
    {
        for(j = 1; j < argc - 1 - i;j++)
        {
            if( strCmp(argv[j], argv[j+1] ) == 0)
            {
                return 5;
            }
        }
    }
}

int strCmp (char *s, char *t)
{
    int i;
    for(i = 0; s[i] == t[i]; i++)
        if(s[i] == '\0')
        {
            return 0;
        }
    }
    return s[i] - t[i];
}

