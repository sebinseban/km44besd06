#include <stdio.h>
int main()
{
    int input,product = 1,temp;
    printf("Enter an input:");
    scanf("%d",&input);

    while (input > 0)
    {
        temp = input % 10;
        product = product * temp;
        input = input / 10;
    }

    printf("Total product is : %d\n",product);

}   