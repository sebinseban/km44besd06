//sebin sebastian
//01.04.2018
//Read the contents of a file and copy to another file.

#include <stdio.h>

int main()
{
    char ch[100];
    FILE *fp1, *fp2;
    int num;
    fp1 = fopen("sample.txt", "r");
    fp2 = fopen("sample2.txt", "w");
    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Error opening file!!\n");
        return 1;
    }
    else
    {
        printf("File opened/created succesfully.\n");
        //read file 1 and store contents to a buffer
        //write contents of buffer to file 2
        //fgets reads a single line from a file and stores it in a buffer.
        while ( !feof(fp1))
        {
            fgets(ch, 100, fp1);
            fputs(ch , fp2);
        }
        printf("Contents of file 1 copied to file 2.\n");
        fclose(fp1);
    }
}