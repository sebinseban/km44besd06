#include <stdio.h>
int main()
{
    int input,sum = 0,temp;
    printf("Enter an input:");
    scanf("%d",&input);

    while (input > 0)
    {
        temp = input % 10;
        sum = sum + temp;
        input = input /10;
    }

    printf("Total sum is : %d\n",sum);

}   