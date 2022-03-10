typedef struct date
{
    int day;
    int month_n;
    char *month;
    int year;
}date;
typedef struct student
{
    int ID_number;
    char name[25];
    date dob;
    int noofsubjects;
    int *marks;
}student;

#define STUDENT 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void readMonth(student *q);
void studentStructArray(student *s);
void topper(student *s);
