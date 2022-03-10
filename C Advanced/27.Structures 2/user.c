/*
2)Create a student template with below details : ID number, name of student,
date of birth (date data structure with int day, char * month, int year) as members, int noofsubjects, int *marks (to hold base address of array of marks in all subjects).
Create an array of student structure.
Send an array of structures from one layer (user.c) to another layer(kernel.c).
Write a function in kernel.c to receive an array of structures from user.c, and put values in it for all students using scanf. then user.c should print the values of the
all students along with their total marks ( first read number of subjects for each student, and create an array of integers to hold marks of each subject ,and store the
 address in marks pointer, and then find out total marks).  While reading date of birth, read month number and assign the appropriate month name in month character pointer.

Write a function in user.c that takes the student array as argument and Finds and prints the topper ( highest average marks) and prints his name and date of
birth (dd- month name-year). */

#include"header.h"

student s[STUDENT];

int main()
{
    studentStructArray(s);


    for(int i = 0; i < STUDENT; i++)
    {

        printf("\n");
        printf("Student %d ID: %d\n",i+1,s[i].ID_number);
        printf("Student %d name: %s\n",i+1,s[i].name);
        printf("Student %d total number of subjects: %d\n",i+1,s[i].noofsubjects);
        //calculate total marks
        int sum = 0;
        for(int j = 0; j < s[i].noofsubjects;j++)
        {
            sum = sum + s[i].marks[j];
        }
        printf("Student %d total marks: %d\n",i+1,sum);

        //print the month name using month
        printf("DOB: %d-%d-%d Birth month: %s",s[i].dob.day,s[i].dob.month_n,s[i].dob.year,s[i].dob.month);

        printf("\n");
    }
    topper(s);
}

void topper(student *s)
{
    int biggest = 0,index;
    for(int i = 0; i < STUDENT ;i++)
    {
        //calculate total marks
        int sum = 0;
        for(int j = 0; j < s[i].noofsubjects;j++)
        {
            sum = sum + s[i].marks[j];
        }
        if (sum >= biggest)
        {
            biggest = sum;
            index = i;
        }
    }
    printf("\n\n");
    printf("Highest marks: %d\n",biggest);
    printf("Name: %s\n",s[index].name);
    printf("DOB: %d-%s-%d\n",s[index].dob.day,s[index].dob.month, s[index].dob.year);

}