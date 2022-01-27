/*LAB Test: Write a program for the given problem below, and copy paste in below questions.

Your program will be validated and given marks based on how  you followed the instructions exactly and maintained the given design in your program, along with output.

Exam timings: 6pm to 8pm. After 8pm ,form will stop accepting responses. You can edit your submission any number of times before 8pm. After 8pm do not edit your response even if it doesnt close as the time stamp will get updated.

Question carries 20 marks .

Write a Program for the following problem:

1) Write a program to read dates of birth of n candidates and choose who the elder is.
Whenever a date is scanned, verify if it is valid date or not. If it is not a valid date, ask for another date, until the user enters a valid date. Print the elder date in the format dss Month-yyyy. 

Functions: Create the below files and functions as per below given design. if you need any extra files, you may create as per requirement: 

FileName: main.c
1)	main function  
// reads date-of-birth, n times in a loop. every date is validated using isvaliddate function. if it is valid then compare and keep the oldest date in a seperate set of variables. If the date is not valid, ask the user to enter another date, and repeate till he enters a valid date. 
//after loop is over, call printdateinformat and printsubscript functions to print the eldest date in required format.

FileName: isvaliddate.c
2) int  IsValidDate(int  d, int  m, int  y); // validates the date, returns 1 or 0
3) int  IsLeapYear(int  y); // checks if a year is leap year or not    

FileName: compare.c
4) int  DateCompare(int  d1,int  m1,int  y1,int  d2,int  m2,int  y2); 
// compares 2 dates, returns 1 or 2 to indicate which date is old.

FileName: print.c
5) void PrintDateinFormat(int  d,int  m,int  y); // prints the given date in ddss Month-yyyy format   
6) void PrintSubscript(int d); // prints the subscript for the date in above date format( th, rd or st).    

FileName: dates.h
Declare all functions in this header file and include it in other files. Also include any required standard header files in this one only.

Program should compile with zero warnings and zero errors when compiled with -Wall option.

Example: 
Input:  Number of candidates: 5
Date of birth of candidate#1 : 3-4-2002
Date of birth of candidate#2: 4 3 2001
Date of birth of candidate#3: 29 2 2007
Date is invalid, plz enter valid date : 31 4 2007
Date is invalid, plz enter valid date : 30 4 2006
Date of birth of candidate#4: 30 6 2003
Date of birth of candidate#5: 29 2 2004

Output: The candidate born on 4th March-2002 is elder of all
*/