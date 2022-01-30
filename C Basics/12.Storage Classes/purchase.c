#include "super.h"
extern int stock;
int purchaseNewStock()    //maximum limit should be 1000
{
    
    int purchase;

    printf("Enter stock to be added: ");
    scanf("%d",&purchase);

    if ( (purchase + stock) <= 1000)
    {
        stock = stock + purchase;
    }
    else 
    {
        printf("Warehouse has capacity of 1000 only. Already %d stock in warehouse.\n",stock);
    }
    return 0;
}