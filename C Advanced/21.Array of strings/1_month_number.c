//sebin sebastian
//17/02/2022
//Read a month number and print the corresponding month name using character pointer array.

#include <stdio.h>

int main()
{
    int month;
    //repetitively ask for correct month
    do
    {
        printf("Enter month number: ");
        scanf("%d",&month);
    }
    while ( !(month >= 0 && month <= 12));

    char *month_names[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    
    printf("%s\n",month_names[month-1]);
}