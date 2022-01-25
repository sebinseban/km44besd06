/*Calculate the salary of an employee for a given month and year. 
month, year, total monthly salary and number of days of Loss of Pay (LOP) are provided as input. 
Loss of Pay means the number of days for which employee wont get salary in that month.
Validate the negative cases like –ve salary value entered, -ve date or –ve year in main function, before calling other functions. 
Print the net salary in main function. */

#include <stdio.h>


int calculateNetSalary(int total, int lop, int m, int y);
int noofdaysinmonth(int m,int y);
int isLeapYear(int y);

int main()
{
    int month, year, salary,lop;
    
        printf("Enter positive values only else will be discarded.\n");
        do
        {
            printf("Total salary of employee: ");
            scanf("%d",&salary);
        }
        while ( !(salary> 0));

        do
        {
            printf("Month: ");
            scanf("%d",&month);
        }
        while ( !(month <= 12 && month > 0));

        do
        {
            printf("Year:");
            scanf("%d",&year);
        }
        while (!(year > 0));

        do
        {
            printf("Number of LOP's: ");
            scanf("%d",&lop); 
        }
        while (!(lop >= 0));


    float result = calculateNetSalary(salary, lop, month, year );

    printf("The net salary is : %.f\n", result);
}


