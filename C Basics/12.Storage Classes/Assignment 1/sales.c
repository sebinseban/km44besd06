#include "super.h"
extern int stock;               //use extern so that the range of varible stock from file stock.c is extented to this file


int sellStock()                  //function to reduce stock from original stock variable in stock.c file
{
    int sell_stock;
    printf("Enter amount of stock to be sold: ");
    scanf("%d",&sell_stock);

    if (stock >= sell_stock)                     //condition checking if there is enough stock to be reduced
    {
        stock = stock - sell_stock;
    }
    else 
    {
        printf("Not enough stock (only %d remaining) to sell. Try adding more stock first.\n",stock);
    }

    return 0;
    
}
