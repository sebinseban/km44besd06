//sebin sebastian
//31/01/2022
/*WAP - with a function that prints the following message every nth time it is called
Hello! I am called nth time.
Print the appropriate subscript after the n, depending on the last digit. Output : The function should print the following  */


#include <stdio.h>
void printSubScript(void);
int n;
int main()
{
    
    printf("Enter the n'th value (must be positive integer): ");
    scanf("%d",&n);
    
    printSubScript();
    
    /*for (int i = 1; i <= n ; i++)
    //{
        printf("I am called %d",i);
        printSubScript(i);
        printf(" time.\n");
    }*/

    return 0;
}

void printSubScript(void)
{
    printf("I am called %d",n);

    int d = n % 10;
    switch (d)
     {
        case 1:
            printf("st time");
            break;
        case 2:
            printf("nd time");
            break;
        case 3:
            printf("rd time");
            break;
        default:
            printf("th time");


    }
    printf("\n");

    
}