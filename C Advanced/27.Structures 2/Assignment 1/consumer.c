//accepting user input as call by reference method
#include"layer.h"
void readInput(shop *p)
{
    printf("Enter name of item to purchase: ");
    scanf("%29[^\n]s",p->nameofitem);
    printf("Enter total quantity required: ");
    scanf("%d",&p->quantity);
    printf("Enter cost of item: ");
    scanf("%f",&p->cost);
    printf("Enter customer ID:");
    scanf("%d",&p->employee_ID);
}
//reading the contents of structure using call by reference method
void printOut (shop *p)
{
    printf("Item name: %s\n",p->nameofitem);
    printf("Total quantity: %d kg\n",p->quantity);
    printf("Cost of item: %f\n",p->cost);
    printf("Customer ID: %d\n",p->employee_ID);
}

void sendByValue (student s2)
{
    printf("Student ID: %d\n",s2.ID);
    printf("Name: %s\n",s2.name);
    printf("Percent: %f\n",s2.per);
}