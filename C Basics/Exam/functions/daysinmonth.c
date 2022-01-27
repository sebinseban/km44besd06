#include <stdio.h>
int isLeapYear(int y)
{
    if( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0) )
    {
        return 1;
        
    }
    
    else         //no need of else, if doesnt execute , it will directly go to return 
    {
        return 0;
    }

    return 0;

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
            if (isLeapYear(y) == 1)   //no need of checking ==1 ,just directly return 1 from isleapyear.
            {
                return 28;
            }
            else 
            {
                return 29;
            }

    }
    return 0;
}

