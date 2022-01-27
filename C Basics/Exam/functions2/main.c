#include "dates.h"

int main()
{
    int total,d1=0,m1=0,y1=0,d2 = 0, m2 = 0, y2 = 0;
    printf("Enter total candidates: ");
    scanf("%d",&total);


        do
        {
        printf("Enter DOB of candidate %d: ",1);
        scanf("%d %d %d",&d1,&m1,&y1);
        
        }
        while ( !(IsValidDate(d1,m1,y1) == 1 ));


    for (int i = 0; i < total-1 ; i++)
    {
        do
        {
        printf("Enter DOB of candidate %d: ",i+2);
        scanf("%d %d %d",&d2,&m2,&y2);
        
        }
        while ( !(IsValidDate(d2,m2,y2) == 1 || IsValidDate(d2,m2,y2) == 0));

        if ( DateCompare(d1,m1,y1,d2,m2,y2) == 1)
        {
            //do nothing
            
        }
        else if (DateCompare(d1,m1,y1,d2,m2,y2) == 2 )
        {
            d1 = d2;
            m1 = m2;
            y1 = y2;
        }
        
       

        

    }
    
    PrintDateInFormat ( d1, m1,  y1);
    
}