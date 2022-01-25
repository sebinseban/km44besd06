#include <stdio.h>
int noofdaysinmonth(int m,int y);

int calculateNetSalary(int total, int lop, int m, int y)
{

    float net_salary , days_in_month;
    days_in_month = noofdaysinmonth(m,y);
    net_salary = total - lop* total/days_in_month;
    return net_salary;
}