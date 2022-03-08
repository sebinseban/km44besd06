#include <stdio.h>
#include"header.h"


int temp2;

struct Date
{
    int d, m, y;

};


int findTopper (struct Student a);

int main()
{
    struct Student s[STUDENTS];
    int datemax = -1;

    for(int i = 0; i < STUDENTS ; i++)
    {
        printf("Enter student %d details: \n",i + 1);

        printf("Enter name: ");
        scanf(" %24[^\n]s", s[i].name);
        getchar();

        printf("Enter KMID: ");
        scanf(" %d", &s[i].ID);
        getchar();
        printf("Enter marks of 6 subjects: ");
        for(int j = 0; j < 6 ; j++)
        {
            scanf("%d",&s[i].marks[j]);
        }
        getchar();
        printf("Enter Fathers name: ");
        scanf("%24[^\n]s", s[i].father_name);
        getchar();
        printf("Enter DOB in dd-mm-yyyy format: ");
        scanf("%d-%d-%d",&s[i].dob_d, &s[i].dob_m, &s[i].dob_y);

        printf("Enter Date of joining in dd-mm-yyyy format: ");
        scanf("%d-%d-%d",&s[i].doj_d, &s[i].doj_m, &s[i].doj_y);
    }


    //finding the topper
    for(int i = 0 ; i< STUDENTS ; i++)
    {
        total_marks = 0;
        topper_index = -1;
        findTopper(s[i]);
        if (temp > total_marks)
        {
            total_marks = temp;
            topper_index = i;
        }
        temp2 = i;
    }
    printf("The topper is: %s\n",s[temp2].name);
    printf("Father's name: %s\n",s[temp2].father_name);
    printf("The total marks is : %d\n",total_marks);


    //finding date of eldest
    int id,i;
    int d = s[0].dob_d;
    int m = s[0].dob_m;
    int y = s[0].dob_y;

    for(i = 1; i < STUDENTS; i++)
    {
        int date = dateComparison(d,m,y,s[i]);
        if(date == 0)
        {
            d = s[i].dob_d;
            m = s[i].dob_m;
            y = s[i].dob_y;
            id = i ;

        }
    }
    printf("The eldest is : %s.\n",s[i].name);
}

