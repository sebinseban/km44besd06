#include "header.h"

int dateComparison(int d,int m, int y, struct Student b)
{
    if (d== b.dob_y)
    {
        if (m == b.dob_m)
        {
            if (d == b.dob_d)
            {
                return 2;
            }
            else if (d < b.dob_d)
            {
                return 0;
            }
            else if (d >b.dob_d)
            {
                return 1;
            }
        }
        else if (m < b.dob_m)
        {
            return 0;
        }
        else if (m > b.dob_m)
        {
            return 1;
        }
    }
    else if (y < b.dob_y)
    {
        return 0;
    }
    else if (y > b.dob_y)
    {
        return 1;
    }
}
