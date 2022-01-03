//sebin sebastian
//02/01/2021
//Find the power bill for the input number of units :
/*
        0 - 200 units : 100/- min
        201 - 400 units : 100 + 0.65 per unit excess of 200
        401 - 600 units : 230 + 0.80 per unit excess of 400
        601 and above units : 390 + 1.00 per unit excess of 600 */

#include <stdio.h>
int main()
{
    int units = 0;
    float temp = 0;
    printf("Enter the total units:");
    scanf("%d",&units);

    if (units <= 200)
    {
        if (units >= 0)
        {
            printf("Total: %d\n",100);
        }
    }
   
    
    else if(units <= 400)
    {
        if (units >= 201)
        {
            temp = units - 200;
            printf("Total: %f\n", temp* 0.65 + 100);
        }
    }

    
    

    else if(units <= 600)
    {
        if (units >= 401)
        {
            temp = units;
            temp = units-400;
            printf("Total: %f\n", temp * 0.80 + 230);
        }
    }
 
    

    else if ( units >= 601)
    {
        
        temp = units - 600;
        printf("Total: %f\n", temp * 1.0 + 390);
    }
}
