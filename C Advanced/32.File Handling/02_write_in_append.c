//sebin sebastian
//01.04.2018
//Open the file in append mode, and write new numbers to it, and print entire content of the file.

#include <stdio.h>

void read(FILE *fp);

int main()
{
    FILE *fp;
    int num;
    //opens a file for writing to end, and if the file does not exist, it will create a new file.
    fp = fopen("sample.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    else
    {
        printf("File opened/created successfully!\n");
        printf("Enter numbers to be written to the file: \n");
        while (1)
        {
            scanf("%d", &num);
            if (num == -1)
            {
                break;
            }
            //fprint(fp, "%d\n", num);
            putw(num, fp);
        }
        fclose(fp);

        fp = fopen("sample.txt","r");
        printf("Reading file \n");

    while (( num = getw(fp)) != EOF  )
    {
        printf("%d\n", num);
    }
    }
    fclose(fp);
    return 0;
}
