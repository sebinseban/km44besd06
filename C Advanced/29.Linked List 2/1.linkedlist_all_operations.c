#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int ID;
    char name[25];
    struct student *next;
}student;

student *head = NULL, *last = NULL, *new = NULL, *temp = NULL;

void createNode();
void printList(student *t);
student * createNodeAndReturn();
void insertNodeBeginning();
void insertAtPosition(int position);
student * search (student *p, int key);
void insertAtIndex(student *head,int x);
void deleteNode(student *p, int x);
void deleteNodeKey(student *p,int x);


int node_index;

int main()
{
    int choice;

    while (1)
    {
        printf("Enter choice: \n");
        printf("1.Create a new node\n");               //insert a node at end, normal
        printf("2.Print the linked list contents\n");  //print the list
        printf("3.Insert new HEAD node\n");            //insert a node at beginning
        printf("4.Insert new node at given position\n");       //insert exactly at mentioned index
        printf("5.Delete node by index\n");
        printf("6.Delete node by key\n");
        printf("7.Exit\n");
        scanf("%d",&choice);

        int x;

        switch(choice)
        {
            case 1:
                createNode();
                printList(head);
                break;
            case 2:
                printList(head);
                break;

            case 3:
                insertNodeBeginning();
                //List();
                break;
            case 4:
                printf("Enter new index where you want to put a new node: ");
                scanf("%d",&x);
                insertAtIndex(head,x);
                //printList(head);
                break;
            case 5:
                printf("Enter index to be deleted: ");
                scanf("%d",&x);
                deleteNode(head,x);
                break;
            case 6:
                printf("Enter key from the list: ");
                scanf("%d",&x);
                deleteNodeKey(head,x);
                break;
            case 7:
                printf("Bye Bye\n");
                return 0;
            default:
                break;
        }
        choice = 0;
    }
}

void deleteNodeKey(student *p,int x)
{
    //checking if key matches with head node
    if (p == NULL)
        printf("No nodes found.Enter some nodes first.\n");

    else if (p -> ID == x)
    {
        p = head;
        head = head ->next;
        free(p);
    }
    else
    {
        student *q = head;
        while (q -> next -> ID != x)
        {
            q = q -> next;

        }
        p = q -> next;
        if (q)
        {
            q -> next = q -> next -> next;
            free(p);
        }
        else
        {
            printf("No such node with %d as key found.Try again.\n",x);
        }


    }
}

void deleteNode(student *p, int x)
{
    //delete first node - simply move the head pointer to second element,then free p
    if (x == 1)
    {
        p = head;
        head = head -> next;
        free(p);
    }

    else
    {
        student *q = NULL;
        p = head;
        for (int i = 0; i < x -1 && p ; i++)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            q -> next = p -> next;
            free(p);
        }
        else
        {
            printf("\nEnter valid index to be deleted.\n");
        }
    }
    //delete a node at given position
    //for any other node deletion, the previos node should link to the node after the
    //node to be deleted
    //se we need a pointer to the previous node
    //one pointer should reach the node and other pointer should be a tail pointer

}

void insertAtIndex(student *p,int x)
{
    //a new node is created, date is filled and next is pointed to null
    //in order to insert at 5th index, find address of 4. let that predecessor pointer be p
    p = head;


    //generate code for inserting at beginning
    //anytime you want to change head, directly access head pointer only
    //dont go with changing p or other temp variables
    if (x == 1)
    {
        new = createNodeAndReturn();
        new -> next = head;
        head = new;
    }
    else if (x > 1)
    {
        for (int i = 1; i < x -1 && p ; i++)        // && p means we are checking if that position actually exists
        {
            p = p -> next;
        }
        //now after this while, p points to the predecessor of the location that we want to insert a node
        if (p)
        {
            new = createNodeAndReturn();
            new -> next = p -> next;
            p -> next = new;
        }
        else
        {
            printf("Invalid index. Enter a valid index.\n\n");
        }

    }
    //where no new nodes are created after the last + 1 node


}

void createNode()
{
    temp = (student *)malloc(sizeof(student));
    printf("Enter Id: ");
    scanf("%d",&temp->ID);
    getchar();
    printf("Enter name: ");
    scanf("%24[^\n]s",temp->name);
    temp -> next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        last -> next = temp;
    }
    last = temp;

}

void printList(student *t)
{

    if (t == NULL)
        printf("No nodes in the list. Try adding more nodes.\n");

    else
    {
        printf("The nodes are as follows\n");
        while (t)
        {
            printf("ID: %d\n",t->ID);
            printf("Name: %s\n",t->name);
            t = t->next;
        }
    }


    printf("\n\n");
}

student * createNodeAndReturn()
{
    temp = (student *)malloc(sizeof(student));
    printf("Enter Id: ");
    scanf("%d",&temp->ID);
    getchar();
    printf("Enter name: ");
    scanf("%24[^\n]s",temp->name);
    temp -> next = NULL;

    return temp;
}

void insertNodeBeginning()
{
    new = createNodeAndReturn();          //create a new node, fill data and make next null, then return that node's address
    new -> next = head;                   //the head node will become the second node, so put head node in new nodes next
    head = new;                           //update the head node to new node
}

void insertAtPosition(int position)
{
    student *t, *p;
    t = createNodeAndReturn();

    if (position == 0)                  //when the entered index is zero
    {
        t->next = head;                 //insert at beginning same logic,    the current head node will become second node. so point the new nodes next to head
        head = t;                      //put the new node address into head
    }
    else if (position > 0)
    {
        p = head;                                       //copy the head pointer into pointer p

        //make pointer p point to the (n-1)th element
        for(int i = 0; i < position - 1 &&  p; i++)
        {
            p = p -> next;                              //p after loop will point to (n-1)th element
        }

        if (p)                                          //checking if p is at a valid node, if null, wont enter if
        {
            t->next = p->next;                          //assign (n-1)th elements next address in the newly created node t
            p->next = t;                                //point p's next to t
        }
        else if (p == NULL)
        {
            printf("Invalid index.Try again.\n");
        }
    }
}

student * search (student *p, int key)
{
    node_index++;
    while (p != NULL)
    {
        node_index++;                      //to count the index of node where the key is matched, node_index is global
        if (p-> ID == key)
        {
            return p;             //return the address of the node
        }
        p = p->next;
    }
    int local_var = node_index;

    return NULL;                  //return NULL if no such element is found in the list
}


student * predecessor_address(student *t, int x)
{
    for(int i = 1; i < x - 1; i++)
    {
        t = t -> next;
    }
    return t;
}




