//sebin sebastian
//17/02/2022
/*Read a number and print it in the below format:
input: 395
output: three nine five */

#include <stdio.h>
int lenth(int num);
int printtens(int n);

int main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d",&input);

    char *digits[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int size_1 = lenth(input);
    int size;
    for(int i = 0; i < size_1; i++)
    {

        int temp ;
        size = lenth(input);
        temp = input % printtens(size - 1);
        input = input / printtens(size - 1);
        printf("%s ",digits[input]);
        input = temp;
    }
    printf("\n");

}
int lenth(int num)
{
    int count = 0;
     while(num)
    {
        num=num/10;
        count++;
    }
    return count;
}

int printtens(int n)
{
    int ten = 1;
    for(int i = 0; i < n ; i++)
    {
        ten = ten * 10;
    }
    return ten;
}