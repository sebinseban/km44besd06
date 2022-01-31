#include "super.h"
extern int stock;
int purchases_made;
int purchases;

int purchaseNewStock()    //maximum limit should be 1000
{
    
    int purchase;

    printf("Enter stock to be added: ");
    scanf("%d",&purchase);

    if ( (purchase + stock) <= 1000)
    {
        stock = stock + purchase;
        purchases_made = purchases_made + purchase;
        purchases++;
    }
    else 
    {
        int purchase_choice;
        //printf("Warehouse has capacity of 1000 only. Already %d stock in warehouse.\n",stock);
        printf("Cannot purchase %d stock now, warehouse will be full. But can purchase %d stock.\n", purchase, 1000 - stock);

        printf("1.Buy %d stocks now.\n",1000 - stock);
        printf("2.Cancel purchase order.\n");
        
        //infinite loop for user to enter either 1 or 2 only. will be reprompted until correct input is given
        do 
        {
            
            printf("Option: ");
            scanf("%d",&purchase_choice);
        }
        while (!(purchase_choice >= 1 && purchase_choice <= 2));

        if (purchase_choice == 1)
        {
            purchases_made = purchases_made + (1000 - stock);
            printf("%d more stock purchased.\n",1000 - stock);
            stock = stock + (1000 - stock); 
            purchases++;

        }
        else if (purchase_choice == 2)
        {
            printf("The purchase order has been cancelled.\n");
        }

    }
    return 0;
}