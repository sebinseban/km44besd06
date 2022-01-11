//sebin sebastian
//10/01/2021
//Write a program to print all odd numbers and even numbers from m to n.

#include <stdio.h>

int main()
{
    int m, n, p , q;
    printf("Enter starting value:");
    scanf("%d",&m);
    printf("Enter stop value:");
    scanf("%d",&n);

    //printf("%d%d",m,n);

    //printf("Even: ");

    p = m;
    q = n; 
    if (m % 2 == 0)
    {
        printf("Even: ");
        while ( m != n)
        {
            if( m % 2 == 0 && n % 2 == 0)
            {
                
                printf(" %d ",m);
                m = m + 2;
            }
            
        }
        printf(" %d \n",m);
    }

  
        printf("Odd: ");
        while (p != q)
        {
            if(p % 2 == 0 )
            {
                

                printf(" %d ",p);
                p = p + 2;
            }
        }
        printf(" %d",p);
    
    
}