//sebin sebastian
//17/02/2022
/*Read a number and print it in the below format:
input: 395
output: three nine five */

#include <stdio.h>

int reverse(int n);
int intLength(int num);

int main()
{
    int input,length,temp;
    printf("Enter a number: ");
    scanf("%d",&input);

    char *digits[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    //find the length of integer before reversing, or else zeroes at end of original input will be discarded
    //reverse the numbers first
    length = intLength(input);

    input = reverse(input);
    for(int i = 0 ; i < length; i++ )
    {
        temp = input % 10;
        printf("%s\t",digits[temp]);
        input = input / 10;
    }
    printf("\n");
}
//function for reversing an integer
int reverse(int n)
{
    int rem,reverse = 0;
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        
        n = n / 10;
    }
    return reverse;
}
//function for finding length of an integer
int intLength(int num)
{
    int count = 0;
     while(num)
    {
        num=num/10;
        count++;
    }
    return count;
}