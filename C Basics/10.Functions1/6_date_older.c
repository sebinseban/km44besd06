//sebin sebastian
//23/01/2022
//Write a function to accept two dates as input arguments, 
//and return 1 if the first date is older, 0 if the second date is older.

#include <stdio.h>

int dateValidation (int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (y1 == y2 )
    {

        if ( m1 == m2)
        {
            if ( d1 == d2 )
            {
                return 0;
            }
            if ( d1 > d2)
            {
                return 1;
            }
            if (d1 < d2 )
            {
                return 2;
            }
        }
        if (m1 > m2)
        {
            return 1;
        }
        if (m1 < m2 )
        {
            return 2;
        }
    }
    if (y1 > y2)
    {
        return 1;
    }
    if (y1 < y2)
    {
        return 2;
    }    
}

int main()
{
    int d1,m1,y1,d2,m2,y2,result;
    printf("Enter first date in the format dd-mm-yyyy:");
    scanf("%d-%d-%d",&d1,&m1,&y1);
    printf("Enter second date in the format dd-mm-yyyy:");
    scanf("%d-%d-%d",&d2,&m2,&y2);
    result = dateValidation (d1,m1,y1,d2,m2,y2);
    if (result  == 1)
    {
        printf("%d-%d-%d is older.(first date)\n",d2,m2,y2);
    }
    else if (result == 2)
    {
        printf("%d-%d-%d is older.(second date)\n",d1,m1,y1);
    }
    else if (result == 0)
    {
        printf("entered two dates are same!\n");
    }
    return 0;
}


int validDays (int day,int month, int year)
{

}