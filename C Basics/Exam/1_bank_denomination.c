//sebin sebastian
//denomination problem
//31/12/2021

#include <stdio.h>

int main()
{
    int amount = 0,a,b,c,d,e,f,g,h,i;
    printf("Enter the amount to withdraw: ");
    scanf("%d",&amount);

    if(amount % 50 == 0)
    {
        
        a = amount/2000;
        b = amount % 2000;
        c = b/500;
        d = b%500;
        e = d/200;
        f = d%200;
        g = f/100;
        h = f%100;
        i = h/50;
        
        printf("Money dispensed as follows:\n");
        printf("No of 2000/- notes: %d\n",a);
        printf("No of 500/- notes: %d\n",c);
        printf("No of 200/- notes: %d\n",e);
        printf("No of 100/- notes: %d\n",g);
        printf("No of 50/- notes: %d\n",i);

    }

    else 
    {
        printf("Please enter the amount in denominations of 50 only\n");
    }



}