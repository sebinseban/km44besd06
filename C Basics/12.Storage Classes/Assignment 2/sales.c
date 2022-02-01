#include "super.h"
extern int stock;               //use extern so that the range of varible stock from file stock.c is extented to this file
int total_sales;
int item_sales;
int remaining;
int sellStock()                  //function to reduce stock from original stock variable in stock.c file
{
    int sell_stock;
    printf("\nEnter amount of stock to be sold: ");
    scanf("%d",&sell_stock);

    if (stock == 0)
    {
        printf("Stock is 0. Try purchasing more and then sell.\n");
    }

    else if (stock >= sell_stock)                     //condition checking if there is enough stock to be reduced
    {
        
        remaining = remaining + sell_stock;
        stock = stock - sell_stock;
        item_sales = item_sales + (stock - sell_stock);
        total_sales++;
    }
    
    else 
    {
        int choice;
        printf("Order greater than stock remaining. Choose below options.\n");
        printf("\t1.Sell available.(%d stock available and can be sold now.)\n",stock);
        printf("\t2.Cancel entire order\n");

        //infinite loop for user to enter either 1 or 2 only. will be reprompted until correct input is given
        do
        {
            printf("\tOption: ");
            scanf("%d",&choice);

        } while ( !(choice >= 1 && choice <= 2));

        if (choice == 1)
        {
            
            remaining = remaining + stock;
            //item_sales = item_sales + (stock - sell_stock);
            printf("\t%d stock sold.\n", stock );
            stock = 0;
            total_sales++;
            //printf("%d remaining stock.\n", stock );
        }

        else if (choice == 2)
        {
            printf("Order cancelled.\n");
            return 0;
        }
        
        

        

    }

    return 0;
    
}