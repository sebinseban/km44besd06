#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int ID;
    char name[20];
    struct student *next;
}student;
student * createnode(void);
void traverse(student *t);


int main()
{
    student *head = NULL,*last = NULL, *new = NULL;

    char ch = 'y';

    while (ch != 'n')
    {
        new = createnode();

        if( head == NULL)
        {
            head = new;
        }
        else
        {
            last->next = new;
        }
        last = new;
        printf("Do you want to continue: ");
        getchar();
        scanf("%c",&ch);
    }


    traverse(head);
}


student * createnode(void)
{
    student *temp = (student *)malloc(sizeof(student));
    printf("Enter ID: ");
    scanf("%d", &temp->ID);
    getchar();
    printf("Enter name: ");
    scanf("%9[^\n]s",temp->name);

    return temp;
}


void traverse(student *t)
{
    while (t)
    {
        printf("ID: %d\n",t->ID);
        printf("Name: %s\n",t->name);
        t = t->next;
    }
}