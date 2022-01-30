#include "super.h"
extern int stock;
int sellStock()
{
    int sell_stock;
    printf("Enter amount of stock to be sold: ");
    scanf("%d",&sell_stock);

    if (stock >= sell_stock)
    {
        stock = stock - sell_stock;
    }
    else 
    {
        printf("Not enough stock (only %d remaining) to sell. Try adding more stock first.\n",stock);
    }

    return 0;
    
}