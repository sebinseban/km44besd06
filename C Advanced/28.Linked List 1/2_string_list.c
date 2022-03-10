//Create a string using linkedlist, read and print it back (store each character in a seperate node).
//Do you think it is required to store a null character in this linkedlist?

#include <stdio.h>
#include <stdlib.h>

typedef struct string_list
{
    char ch;
    struct string_list *next;

}string_list;


string_list * createNode(char s);
void traverse(string_list *t);

int main()
{
    string_list *head = NULL, *new = NULL, *last = NULL;
    int i = 0;
    char name[25];
    printf("Enter a string: ");
    scanf("%24[^\n]s",name);

    //send char by char to the createnode function
    while (name[i] != '\0')
    {
        new = createNode(name[i]);

        if (head == NULL)
        {
            head = new;
        }
        else
        {
            last -> next = new;
        }
        last = new;

        i++;
    }

    traverse(head);
}

//while creating node, put in character also in each char location
string_list * createNode(char s)
{
    string_list *temp = (string_list *)malloc(sizeof(string_list));
    temp -> ch = s;
    temp -> next = NULL;

    return temp;
}


void traverse(string_list *t)
{
    printf("The characters in the linked list are as follows: \n");
    while(t)
    {
        printf("%c ", t->ch);
        t = t->next;

    }
    //printf("\n");
}