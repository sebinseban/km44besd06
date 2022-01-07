//sebin sebastian
//07/01/2022
//Input 3 digits, read them into three different characters. Make one integer out of them and display.
/*
        Eg., input 345. char c =‘3’,b=‘4’,d=‘5’. 
        Output : int i = 345.
*/

#include <stdio.h>

int main()
{
    char a,b,c;
    int i,j,k;
    printf("Enter three single digit numbers, each follwed by space: ");
    scanf("%c %c %c",&a,&b,&c);
    
    i = (int)a - 48;
    j = (int)b - 48;
    k = (int)c - 48;


    int l = i*100 + j*10 + k*1;
    printf("%d",l);    


    
}