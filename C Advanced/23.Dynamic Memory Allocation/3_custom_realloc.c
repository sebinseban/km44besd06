//sebin sebastian
//21/02/2022
/*Implement your own realloc function using malloc and free. 
        - Create the new size memory using malloc
        - copy the data from old address to new address
        - release old address
        - return new address  */

#include <stdio.h>
#include <stdlib.h>

void * reAlloc( void * p, int new_size);

int input;

int main()
{
    
    printf("Enter an array size:");
    scanf("%d",&input);

    int *p;
    p = (int *)malloc (input * sizeof(int));
    printf("address of original p :%p\n",p);
    p = reAlloc ( p, 5 );
    printf("address of after reduce p :%p\n",p);

}


void * reAlloc( void * p, int new_size)
{
    if (new_size < input)
    {
        void * p1 = (int *) malloc (new_size * sizeof(int));
        free(p);
        p = NULL;
        return p1;
    }

    else if (new_size > input)
    {
        void *p1 = p;
        p1 = (int *)malloc(new_size * sizeof(int));
        if (p1 == NULL)
        {
            printf("Error.null location\n");
            exit(1);            
        }
        return p1;
    }
    return p;
}