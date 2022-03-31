//sebin sebastian
//26/03/2022
// keep reading numbers from user, and write those numbers to a file. Once user presses -1, stop reading, 
// and print all the contents of the file. Open the file everytime with previous contents intact (append mode).

#include <stdio.h>

int main()
{
    int x;
    FILE *fp;
    fp = fopen("1_write_in_append.txt","w");


    if (fp == NULL)
    {
        printf("Can't access the file in write mode.\n");
        
    }
    else
    {
        int input = 1;
        while ( input != -1)
        {
            printf("Number: ");
            scanf("%d",&input);
            putw(input, fp);

        }
        fclose(fp);

        fp = fopen("1_write_in_append.txt","r");
        while (getw(fp) != EOF)
        {
            x = getw(fp);
            printf("Read from file: %d\t",x);
            
        }
        fclose(fp);

    }
    return 0;

}