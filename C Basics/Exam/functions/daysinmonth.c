#include <stdio.h>
int isLeapYear(int y)
{
    if( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0) )
    {
        return 1;
        
    }
    
    else 
    {
        return 0;
    }

}
int noofdaysinmonth(int m,int y)
{
    switch(m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;

        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        
        case 2:
            if (isLeapYear(y) == 1)
            {
                return 28;
            }
            else 
            {
                return 29;
            }

    }
}

