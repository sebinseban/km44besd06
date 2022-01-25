/*LAB Test: Write a program for the given problem below, and copy paste them in the below questions, one file each.

Your program will be validated and given marks based on how  you followed the instructions exactly and maintained the given design in your program, along with output. Do not change the given design or write your own design. 

Exam timings: 6.00pm to 7.30pm. After 7.30pm ,form will stop accepting responses. You can edit your submission any number of times before 7.30pm. After 7.30pm do not edit your response even if it doesnt close as the time stamp will get updated.

Question carries 20 marks .

Write a Program for the following problem:

1)Calculate the salary of an employee for a given month and year. 

month, year, total monthly salary and numbeof r days of Loss of Pay (LOP) are provided as input. 
Loss of Pay means the number of days for which employee wont get salary in that month.
Validate the negative cases like –ve salary value entered, -ve date or –ve year in main function, before calling other functions. 
Print the net salary in main function.

Note:(Program must compile with 0 warnings when compiled with –Wall option)

Functions: Implement the below functions in seperate files as mentioned (File names are given above function names):

FileName: main.c
1)	main function. // takes input, calls calculatenetsalary function.


FileName: daysinmonth.c
2)int  NoOfDaysinMonth(int  m, int  y); // returns the number of days in a month         
3)int  IsLeapYear(int   y); // checks if a year is leap year or not     

            
FileName: calsal.c
3)int  CalculateNetSalary(int  total, int  lop, int  m, int  y); // calculates and returns the net salary for a given month & year  , uses  NoOfDaysinMonthto calculate the one day salary.


Example:  Input:
Total salary of the employee: 10000
Month: 1 , Year: 2001
Number of LOPs: 3 (LOP: Days for which he will not get salary)

Hint: net salary : Total salary – Number of LOPS * Total salary / no of days in the given month
i.e., net salary : 10000 - 3 * 10000 / 31 (January has 31 days)

Output: Net payable salary is: 9032 /-       */
