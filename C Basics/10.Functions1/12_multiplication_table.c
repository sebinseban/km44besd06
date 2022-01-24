//sebin sebastian
//24/01/2022
//Write a function that takes an integer parameter and prints its multiplication table.return type should be void.

#include <stdio.h>

void multiplicationTable(int a)
{
    int i;
    for (i = 1; i <= 10 ; i++)
    {
        printf("%d * %d = %d\n",a,i,a*i);
    }
    return;
}

int main()
{
    int input;
    printf("Enter any number: ");
    scanf("%d",&input);

    multiplicationTable(input);
    return 0;
}