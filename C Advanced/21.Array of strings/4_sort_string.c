//sebin sebastian
//17/02/2022
//Write a program to sort the names in an array of strings in alphabetical order. 
//Use 2 dimentional character array to store the strings.

#include <stdio.h>
void bubbleSort (int * arr);

int strCmp( char* arr[], char* arr1[]);

#define ROW 6
#define COL 10
int main()
{
    char arr[ROW][COL] = {"sebin","sanju","shelcy","raifal","rittu","sheronisa"};

}
//call the bubble sort function, compare 2 strings, implement bubble sort with strings
//if greater, call the swap function
void bubbleSort (int * arr)
{
    for (int i = 0;  i <= ROW - i - 1 ; i++)
    {
        for(int j = 0; j <= ROW - i - 2 ; j++)
        {
            int value = strCmp( &arr[j], &arr[j+1])
            printf("%d\n",value);
            
        }

    }
}
int strCmp( char *arr[], char *arr1[])
{
    //while the characters are equal, return 0 when nullcharacter comes
    //whenever character not equal , return the difference of those two chars
    int i;
    for ( i = 0; arr[i] == arr1[i]; i++ )
    {
        if (arr[i] == '\0')
        {
            return 0;
        }        
    }
    return arr[i] - arr1[i];  
}
