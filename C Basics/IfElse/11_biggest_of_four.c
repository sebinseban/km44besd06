//sebin sebastian
//02/02/2022
//Write a program to find the biggest of four numbers

#include <stdio.h>

int main()
{
    int a , b , c , d ;
    printf("Enter 4 integers: ");
    scanf("%d %d %d %d", &a,&b,&c,&d);

    if ( a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A:%d is biggest.\n",a);
            }
        }

    }
    else if ( b > c)
    {
        if ( b > d)
        {
            
            printf("B:%d is biggest.\n",b);
        }     
    }
    else if ( c > d)
    {
        printf("c: %d is biggest.\n",c);
    }
    else 
    {
        printf("d:%d is biggest.\n",d);
    }
}    
