//sebin sebastian
//14/02/2022
//Implement calculator program using macros. 
//Write down your own header file ,where the calculator macros are defined(ADD,SUB,MUL,DIV).

#include <stdio.h>
#include "3_header.h"
int main()
{
    int x,y;
    printf("Enter 2 integers: ");
    scanf("%d %d",&x,&y);
    printf("Add: %d\n", ADD(x,y));
    printf("Sub: %d\n",SUB(x,y));
    printf("Mul: %d\n",MUL(x,y));
    printf("Div: %d\n",DIV(x,y));
}