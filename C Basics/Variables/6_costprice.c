//sebin sebastian
//if sale price and profit of n items is given as input, find the cost price of 1 item.
#include <stdio.h>
int main()
{
    int n;
   float SP, profit, cp;
   printf("Enter the sales price,the profit and total items: ");
   scanf("%f%f%d",&SP, &profit,&n);
   cp = (SP-profit)/n;
   printf("The price of 1 item is %0.2f .\n", cp);
}