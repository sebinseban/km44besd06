//sebin sebastian
//05/02/2022
//Find the power bill for the input number of units :
/*
        0 - 200 units : 100/- min
        201 - 400 units : 100 + 0.65 per unit excess of 200
        401 - 600 units : 230 + 0.80 per unit excess of 400
        601 and above units : 390 + 1.00 per unit excess of 600 */

#include <stdio.h>

int main()
{
    int units;
    printf("Enter total units:");
    scanf("%d", &units);

    if (units >= 601)
    {
        printf("Total: %f\n", 390 + (1.00* (units - 600)));
    }
    else if (units >= 401 && units <= 600)
    { 
        printf("Total: %f\n", 230 + (0.80 * (units - 400))); 
    }
    else if (units >= 201 && units <= 400)
    {
        printf("Total: %f\n", 100 + (0.60 * (units - 200)));
    }
    else 
    {
        printf("Total: %d\n", 100);
    }

}