//sebin sebastian
//01.04.2022
//Create a new file using contents of two files.(append one file content to another, and write to a third file).


#include <stdio.h>

int main()
{
    char str[100];
    FILE *fp1, *fp2, *fp3;
    char str2[100];
    fp1 = fopen("sample.txt", "a");
    fp2 = fopen("sample2.txt", "r");
    fp3 = fopen("sample3.txt", "w+");
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("Error opening file!!\n");
        return 1;
    }
    else
    {
        printf("File opened/created succesfully.\n");

        //read file 2 and append it to file 1
        while ( !feof(fp2))
        {
            fgets(str, 100, fp2);
            fputs(str, fp1);

        }
        //add a new line after appending file 2 to file 1
        fputs("\n", fp1);
        fclose(fp1);
        fclose(fp2);


        //now read file 1 and write it to file 3
        fp1 = fopen("sample.txt", "r");
        while ( !feof(fp1))
        {
            fgets(str2,100, fp1);
            fputs(str2, fp3);
        }
        fclose(fp1);
        fclose(fp3);
        //close all open files

    }
}
