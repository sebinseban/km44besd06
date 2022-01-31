//sebin sebastian
//31/01/2022
/*WAP - with a function that prints the following message every nth time it is called
Hello! I am called nth time.
Print the appropriate subscript after the n, depending on the last digit. Output : The function should print the following  */


#include <stdio.h>
void printSubScript(int n);

int main()
{
    int n;
    printf("Enter the n'th value: ");
    scanf("%d",&n);

    for (int i = 1; i <= n ; i++)
    {
        printf("I am called %d",i);
        printSubScript(i);
        printf(" time.\n");
    }
}

void printSubScript(int n)
{
    int d = n % 10;
    switch (d)
     {
        case 1:
            printf("st");
            break;
        case 2:
            printf("nd");
            break;
        case 3:
            printf("rd");
            break;
        default:
            printf("th");

    }
}