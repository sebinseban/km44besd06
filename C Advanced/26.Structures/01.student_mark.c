#include <stdio.h>

int datecomparison ( );


#define NAME_LENGTH 25
#define STUDENTS 2

struct Date
{
    int d, m, y;

};

struct Student
{
    int ID;
    char name[NAME_LENGTH];
    int marks[6];
    char father_name[NAME_LENGTH];

    //struct Date dob;
    //struct Date doj;
    int dob_d, dob_m, dob_y;
    int doj_d, doj_m, doj_y;
};

int dateComparison (struct Student a, struct Student b);

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

    for (int i = 0; i < STUDENTS; i++)
    {
        int result = dateComparison(s[i], s[i+1]);
        if (result == 0)
        {
            datemax = i;
        }
    }
    printf("%d\n",datemax);
    printf("Eldest: %s\n", s[datemax].name);

}

int dateComparison (struct Student a, struct Student b)
{
    float date1 = (10 * a.dob_d) + (100 * a.dob_m) + (10000 * a.dob_y);
    float date2 = (10 * b.dob_d) + (100 * b.dob_m) + (10000 * b.dob_y);

    if (date1 < date2)
    {
        return 0;
    }

    else
    {
        return 1;
    }
}

int findTopper (struct Student a, struct Student b)
{
    int topper_index = -1;
    int total_marks = 0;
    


}