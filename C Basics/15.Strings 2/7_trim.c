//sebin sebastian
//09/02/2022
//remove all excess spaces

#include<stdio.h>
void trim(char a[]);
int main()
{
        char a[100];
        printf("enter the string");
        scanf("%[^\n]s",a);
        trim(a);
        return 0;
}
void trim(char a[])
{
        int i,j;
        for(i=0;a[i]!='\0';i++)
        {

                if((a[i]==' '&&a[i+1]==' ')||(a[0]==' ')||(a[i+1]=='\0'))
                {
                        for(j=i;a[j]!='\0';j++)
                        {
                                a[j]=a[j+1];
                        }
                        i--;

                }
        }
        printf("%s",a);
}