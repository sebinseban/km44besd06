//sebin sebastian
//29/01/2022
//Supermarket problem
//write the loop for 4 options in this file
/*SuperMarket : 

Display menu with choices : 
        1) check AvailableStock
        2) Purchase new items  : maximum limit should be 500, if more than that, tell "Cant be purchased this time"
        3) Sell items : this should be continuous as long as the user wants to continue. 
        4)Program should stop when the user wants to quit. */



#include "super.h"

extern int stock;

int main()
{
    int input;
    printf("Welcome to the Supermarket.\n");
    printf("Enter the number corresponding to the choice: If not, will be repeated until you choose correct. \n");
    
    
    while (1)
    {
        do
        {
            printf("1)Check AvailableStock\n2)Purchase new items\n3)Sell items\n4)Quit \nOption: ");
            scanf("%d",&input);

            switch (input)
            {
                case 1:
                    printf("Remaining stock is: %d\n",stock);
                    break;
                case 2: //Purchase
                    purchaseNewStock();
                    break;
                    

                case 3:
                    sellStock();
                    break;
                case 4:
                    printf("Bye. Thanks for shopping with us.\n");
                    return 0;
                    break;
                
            } 
        }
        while ( !(input > 0 && input <= 4));
        
    }
    return 0;
    
    
    
}
