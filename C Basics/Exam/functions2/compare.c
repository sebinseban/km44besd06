#include "dates.h"

int DateCompare(int d1, int m1, int y1, int d2, int m2, int y2)
{
    //this will work unless you enter year of 1000000
    int date_1 = d1 + m1 * 100 + y1 * 100000;
    int date_2 = d2 + m2 * 100 + y2 * 100000;

    if (date_1 > date_2)
    {
        return 2;
    }
    else if (date_1 < date_2)
    {
        return 1;
    }

    return 0;

}