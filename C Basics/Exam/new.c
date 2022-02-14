//12/02/2022


#include <stdio.h>
int calculator(int* a, int* b, int* add, int* sub, int* mul, int* div, int* rem);

int main()
{
    int a,b,add,sub,mul,div,rem;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    calculator(&a,&b,&add,&sub,&mul,&div,&rem);
    printf("Addition: %d\nSubtraction:%d\nMultiplication:%d\nDivision:%d\nRemainder:%d\n",add,sub,mul,div,rem);
}

int calculator(int* a, int* b, int* add, int* sub, int* mul, int* div, int* rem)
{
    *add = *a + *b;
    *sub = *a - *b;
    *mul = *a * *b;
    *div = *a / *b;
    *rem = *a % *b;
}
