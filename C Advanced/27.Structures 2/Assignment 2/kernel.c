#include"header.h"
int i;
void writeMonth(student *q)
{


    if( q->dob.month_n == 1)
    {
        strcpy(q->dob.month,"Jan");
    }

    else if( q->dob.month_n == 2)
    {
        strcpy(q->dob.month,"Feb");
    }

    else if( q->dob.month_n == 3)
    {
        strcpy(q->dob.month,"Mar");
    }

    else if ( q->dob.month_n == 4)
    {
        strcpy(q->dob.month,"Apr");
    }

    else if ( q->dob.month_n == 5)
    {
        strcpy(q->dob.month,"May");
    }

    else if ( q->dob.month_n == 6)
    {
        strcpy(q->dob.month,"June");
    }

    else if( q->dob.month_n == 7)
    {
        strcpy(q->dob.month,"July");
    }

    else if( q->dob.month_n == 8)
    {
        strcpy(q->dob.month,"Aug");
    }

    else if( q->dob.month_n == 9)
    {
        strcpy(q->dob.month,"Sep");
    }
    else if( q->dob.month_n == 10)
    {
        strcpy(q->dob.month,"Oct");
    }
    else if( q->dob.month_n == 11)
    {
        strcpy(q->dob.month,"Nov");
    }
    else if ( q->dob.month_n == 12)
    {
        strcpy(q->dob.month,"Dec");
    }


}
void studentStructArray(student *p)
{
    char temp[5];
    p ->dob.month = (char *) malloc( strlen(temp));
    for( i = 0; i < STUDENT; i++)

    {
        printf("\n\n");
        printf("Enter student ID: ");
        scanf("%d",&p[i].ID_number);
        getchar();
        printf("Enter name:");
        scanf("%[^\n]s",p[i].name);

        printf("Enter date of birth in dd-mm-yyyy format:");
        scanf("%d-%d-%d",&p[i].dob.day,&p[i].dob.month_n,&p[i].dob.year);
        writeMonth(p);

        printf("Enter number of subjects: ");
        scanf("%d",&p[i].noofsubjects);

        p[i].marks = (int *)malloc(p[i].noofsubjects * sizeof(int));
        printf("Enter marks of %d subjects: ",p[i].noofsubjects);

        for(int j = 0; j < p[i].noofsubjects; j++)
        {
            scanf("%d",&p[i].marks[j]);
        }
    }

}