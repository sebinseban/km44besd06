//sebin sebastian
//19/01/2022
//Modify the calculator program to perform the operations continuously until the user chooses not to continue further.
/*
        eg., input: 3 + 4
        output: 3 + 4 = 7
        do you want to continue (y/n) ? y
        input: 4 * 8
        output: 4 * 8 = 32
        do you want to continue (y/n) ? n
        Thank you    */
    
#include <stdio.h>

int main()
{
    float x,y;
    char ch,random;
    printf("Enter two integers in the order x * y: ");
    scanf("%f %c %f",&x,&ch,&y);


    do 
    {
            switch (ch)
            {
                case '+':
                        printf("%0.2f + %0.2f = %0.2f\n",x,y, x+y);
                        break;
                
                case '-':
                        printf("%0.2f - %0.2f = %0.2f\n",x,y, x-y);
                        break;

                case '*':
                        printf("%0.2f * %0.2f = %0.2f\n",x,y, x*y);
                        break;
                
                case '/':
                        printf("%0.2f + %0.2f = %0.2f\n",x,y, x+y);
                        break;
                

            }
            printf("Do you want to continue\n");
            scanf(" %c",&random);
            
            if (random == 'y')
            {
                printf("Enter two integers in the order x * y: ");
                scanf("%f %c %f",&x,&ch,&y);
            }
            else 
            {
                printf("Thank you.\n");
            }
    }
    
    while ( random == 'y' );

}    