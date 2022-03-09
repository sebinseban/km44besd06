/*1)Take two layers (two source files, producer.c , consumer.c & one header file layer.h). In producer.c, define a structure variable , create its data and send it to
consumer.c, via
i ) Call by Value
ii ) Call by Reference
in consumer.c , print the data of the structure in a neat format.
in layer.h file create the below structure template.
struct student {
 int ID;
      char name[30];
 float per; */

#include"layer.h"

int main()
{
    shop item1 ;           //created 1 structure
    readInput(&item1);     //reading input from user using call by reference
    printOut(&item1);      //printing the entered input using call by reference

    student s1 = {1,"Vinay",99};
    sendByValue(s1);

}


