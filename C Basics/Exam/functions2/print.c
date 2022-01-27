#include "dates.h"

void PrintSubScript(int d)
 {
     if (d > 0 && d <= 31)
     {
        switch (d)
     {
        case 1:
        case 21:
        case 31:
            printf("st");
            break;
            
        case 2:
        case 22:
            printf("nd");
            break;
        case 3:
            printf("rd");
            break;
        default:
            printf("th");
     }
     }
      
 }
 void PrintSubScriptMonth(int m)
 {
     switch (m)
     {
        case 1: 
            printf(" January");
            break;
        case 2:
            printf(" February");
            break;
        case 3:
            printf(" March");
            break;
        case 4:
            printf(" April");
            break;
        case 5:
            printf(" May");
            break;
        case 6:
            printf(" June");
            break;
        case 7:
            printf(" July");
            break;
        case 8:
            printf(" August");
            break;
        case 9:
            printf(" Septemper");
            break;
        case 10:
            printf(" October");
            break;
        case 11:
            printf(" November");
            break;
        case 12:
            printf(" December");
            break;
            
     }
 }

void PrintDateInFormat (int d,int m, int y)
{
    
    printf("The candidate born on %d",d);
    PrintSubScript(d);
    PrintSubScriptMonth(m);
    printf(" %d is the oldest.\n",y);
    
}
 