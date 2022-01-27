#include "dates.h"


int IsLeapYear(int y)
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





int IsValidDate(int d,int m, int y)
{
    if( d > 0 && d <=31 && m > 0 && m <= 12 && y > 0 && y < 10000)
    {
        switch (m)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if ( d > 0 && d <= 31)
                {
                    return 1;
                }
                else 
                {
                    return 0;
                }

            case 4:
            case 6:
            case 9:
            case 11:
                if (d > 0 && d <= 30)
                {
                    return 1;
                }
                else 
                {
                    return 0;
                }
            case 2:
                if( IsLeapYear(y) == 1)
                {
                    //only 29 days
                    if (d > 0 && d <= 29)
                    return 1;
                }
                else if( IsLeapYear(y) == 0)
                {
                    //only 28 days
                    if (d >0 && d <= 28)
                    return 0;
                }
        }
    }
    else 
    {
        return 0;
    }
    return 0;
}