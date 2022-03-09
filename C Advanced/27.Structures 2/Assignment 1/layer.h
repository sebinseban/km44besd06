typedef struct shop
{
    char nameofitem[30];
    int quantity;
    float cost;
    int employee_ID;
}shop;

typedef struct student
{
    int ID;
    char name[30];
    float per;
}student;


#include <stdio.h>
void readInput(shop *p);
void printOut (shop *p);
void sendByValue (student s2);
