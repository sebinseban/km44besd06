//sebin sebastian
//06/01/2022
//Write the calculator program using switch case statement.

#include <stdio.h>

int main()
{
    float a, b;
    char ch;
    printf("Enter 2 integers(real also) follwed by operator sign: ");
    scanf("%f %f %c",&a,&b,&ch);

    switch (ch)
    {
        case '+':
            printf("%0.2f + %0.2f = %0.2f\n", a,b, a+b);
            break;

        case '-':
            printf("%0.2f - %0.2f = %0.2f\n",a,b,a-b);
            break;
        
        case '/':
            printf("%0.2f / %0.2f = %0.2f\n",a,b,a/b);
            break;

        case '*':
            printf("%0.2f * %0.2f = %0.2f\n",a,b,a*b);
            break;
        

    }
}