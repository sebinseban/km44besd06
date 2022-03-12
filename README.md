# **KM44BESD06**

**Sebin Sebastian's** Lab Assignments Repo

## 4 EMBEDDED C

### 4.2.1 GPIO MINI PROJECT : LCD INITIALIZATION

`void write_high_nibble( unsigned char data );`

        Write Higher Nibble data in to LCD.

        Return Value: No return Value; Argument: unsigned char data 

`void write_low_nibble( unsigned char data );`

        Write Lower Nibble data in to LCD.

        Return Value: No return Value; Argument: unsigned char data 

`void KM_LCD_Init(void);`

        LCD Initialization.

        Return Value: No return Value; Argument: No Argument 

`void KM_LCD_Write_Cmd( unsigned char );`

        Write a LCD command.

        Return Value: No return Value; Argument: unsigned char 

`void KM_LCD_Write_Data( unsigned char );`

        Write a LCD Data (single character).

        Return Value: No return Value; Argument: unsigned char 

`void KM_LCD_Write_Str(char *);`

        Write a LCD Data (Multiple characters).

        Return Value: No return Value; Argument: character pointer 

### 4.2 GPIO (28/02/2022) ASSIGNMENT 2

#### GPIO Ports Configure to Output:

1) Toggle RED LED ON time is 50ms and RED LED OFF time is 1300ms.

2) Airplane wing Lights blinking Delays:

        USER LED1 (GREEN): ON (50msec), OFF (50msec), ON (50msec), OFF (150msec) periodically.

        USER LED2 (RED): ON (50msec), OFF (250msec), ON (50msec), OFF (500msec) periodically.
        V
00000000
#### GPIO Ports Configure to Input with Polling:

3) Whenever SW_UP is pressed RED LED is ON, whenever SW_DN is pressed GREEN LED is ON.

4) Use “SW_ENT” and declare “counter” global variable. Your program should increment counter
by one, every time switch is pressed.

        Note how the value of counter changes on each “ENTER SWITCH” press. Use
        debugger and add Counter to “Watch Expression” window. Does the value of counter increment by one always?

5) Whenever ENTER SWITCH is Press toggle RED LED.

6) Read SW_ENT, if switch is press RED LED is ON otherwise RED LED is OFF. Note that RED LED
should remain ON for the duration switch is kept pressed i.e. RED LED should turn OFF when switch is released.

7) Whenever SW_ENT Press turn ON BUZZER up to 250msec and Turn OFF BUZZER

### 4.1 BITWISE OPERATORS (20/02/2022) ASSIGNMENT 1

1. WAP to print binary?

2. WAP to count the bits set (bit value 1) in an integer? Find out and compare different possibilities?

3. WAP to implement subtraction functionality without using SUB ('-') Operator.

4. WAP to implement addition functionality without using ADD ('+') Operator.

5. WAP to implement XOR functionality without using XOR (^) operator.

6. WAP to implement the sizeof operation using bitwise operator.

7. WAP to convert little endian integer to Big endian integer.

8. WAP to multiply a number by 9 using bit shift.

9. WAP to check whether a number is ODD or EVEN using bitwise.

10. WAP to check whether a number is power of 2 or not?

11. WAP Check if the 20th bit of a 32 bit integer is ON or OFF?

12. Write a functionsetbits (x,p,n,y)that returns x with then bits that begin at position p
        set to the rightmost n bits of y, leaving the other bits unchanged.

        Example: if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3
        and p = 6 then you need to strip off 3 bits of y (111) and put them in x at position

        10xxx010 to get answer 10111010. Your answer should print out the result in binary form although input can be in decimal form.

        Your output should be like this:

        x = 10101010 (binary)

        y = 10100111 (binary)

        setbits n = 3, p = 6

        gives x = 10111010 (binary).

13. WAP Swap any two numbers using bitwise operators. How it works?

## 3 ADVANCED C

### 3.30 STACK & QUEUE (12/03/2022) ASSIGNMENT 30

1. Implement stack using array

2. Implement stack using queue

3. Implement circular queue using array

4. Implement queue using linked list

### 3.29 LINKED LIST 2 (10/03/2022) ASSIGNMENT 29

1) Make a menu driven linked list program with the following options, that continues until user chooses to quit, with all proper error handling:

Start with an empty linkedlist ,and build the list while the user chooses to insert new nodes from below options:

        1) Insert a new node at a given position
        2) Insert a new node before a given key
        3) Insert a new node after a given key
        4) Delete a given node with matching key
        5) Print the linked list
        6) Quit

2) Create a sorted list from the input entered by the user:

        eg., 4 8 2 10 9 7 14 3 10 3

        output: 2 3 3 4 7 8 9 10 10 14

### 3.28 LINKED LIST 1 (09/03/2022) ASSIGNMENT 28

1. Create a liked list using student structure with ID and name fields, and print the list.

2. Create a string using linkedlist, read and print it back (store each character in a seperate node). Do you think it is required to store a null character in this linkedlist?

### 3.27 STRUCTURES 2 (09/03/2022) ASSIGNMENT 27

1)Take two layers (two source files, producer.c , consumer.c & one header file layer.h). In producer.c, define a structure variable , create its data and send it to consumer.c, via

        i ) Call by Value

        ii ) Call by Reference

in consumer.c , print the data of the structure in a neat format.

in layer.h file create the below structure template.

        struct student 
        {
        int ID;
        char name[30];
        float per;
        }


2)Create a student template with below details : ID number, name of student, date of birth (date data structure with int day, char * month, int year) as members, int noofsubjects, int *marks (to hold base address of array of marks in all subjects).

Create an array of student structure. 

Send an array of structures from one layer (user.c) to another layer(kernel.c). 

Write a function in kernel.c to receive an array of structures from user.c, and put values in it for all students using scanf. then user.c should print the values of the all students along with their total marks ( first read number of subjects for each student, and create an array of integers to hold marks of each subject ,and store the address in marks pointer, and then find out total marks).  While reading date of birth, read month number and assign the appropriate month name in month character pointer.

Write a function in user.c that takes the student array as argument and Finds and prints the topper ( highest average marks) and prints his name and date of birth (dd- month name-year).

### 3.26 STRUCTURES (28/02/2022) ASSIGNMENT 26

Define a student template with below information.
 
ID, name, marks of 6 subjects, fathername, day ,month & year of birth, day,month & year of joining, day, month. Create Date as another structure and use inside student structure.

Create an array of students and read the data for all students. 

- Implement a date comparison function that takes 2 date structures as arguments and returns 1 or 0 to indicate which date is elder.

- using the above function, findout and print the name of the eldest of all the students.

- Find the topper out of all students and print his name and father name and marks and total marks.

- How many students passed the exams (total marks above 30% ) and their names.

- How many students failed (any subject below 30% marks ) and their names.

- How many students got first class (total marks above 60% ) and print all their names.

- Sort the students array in alphabetical order of their names.

- Display the student names rankwise without sorting the array. 

you may add extra members to the structure if required.

### 3.25 FUNCTION POINTERS (23/02/2022) ASSIGNMENT 25

1) Write the calculator program using function pointers.

2) Write the calculator program using array of function pointers.

3) Write the calculator program using a function that accepts a function pointer as argument and invokes it.

```
        eg., fptr = ADD;

        invokeptr(fptr);

        invokeptr(int (*fptr) (int,int))

        {

        printf(""%d\n"",fptr(3,4));
        
        }
```

4) Write a program to read an integer and print it back using function pointers for printf and scanf.

5) sort the list of names received on command line argument and print them in ascending or descending order / comparison with case or without case based on options -r & -i. Use function pointers to choose which function (strasc/strdesc , strcmp/stricmp) to call based on the option.

### 3.24 DYNAMIC MEMORY ALLOCATION (23/02/2022) ASSIGNMENT 24

1) Create a 2 dimentional array of characters using a character pointer array (number of strings fixed). Each string length can be different (upto maximum 100), read it from the user. Create memory for each string upto required size only. 

Sort the strings and print.

2) Create a 2 dimentional array of characters using a double pointer( number of strings dynamic).  Each string length can be different (upto maximum 100), read it from the user. Create memory for each string upto required size only. 

Sort the strings and print.


### 3.23 DYNAMIC MEMORY ALLOCATION (20/02/2022) ASSIGNMENT 23

1)Create a dynamic array of integers. Take input from user , sort the array and display the output.

2)Write a function that takes two sorted integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers.

        Assume that the input arrays are sorted.

        eg., array1 : 10,12,13,14,15,16

        array2 : 9,12,15,19,20

        output array3 : 9,10,12,13,14,15,16,19,20
        
3)Implement your own realloc function using malloc and free. 

        - Create the new size memory using malloc

        - copy the data from old address to new address

        - release old address

        - return new address

4)Implement itoa function and return the string from the function. Print the result in main.
itoa function takes an integer as input,converts it into a numerical string and returns it.

        eg., input a number: 123
        
        output: 123

### 3.22 COMMANDLINE ARGUMENTS (18/02/2022) ASSIGNMENT 22

1. Implement the calculator program using Command line arguments

        eg,, >./a.out 1 + 3

        output 1+3 = 4


        >./a.out 145 * 20

        output 145*20 = 2900


2. sort the list of names received on command line argument and print them in ascending or descending order based on option -r.

        >./a.out one two three four five six seven eight nine ten

        eight
        five
        four
        nine
        one
        seven
        six
        ten
        three
        two

        >./a.out  -r one two three four five six seven eight nine ten

        two
        three
        ten
        six
        seven
        one
        nine
        four
        five
        eight

### 3.21 ARRAY OF STRINGS (16/02/2022) ASSIGNMENT 21

1. Read a month number and print the corresponding month name using character pointer array.

2. Read a number and print it in the below format:

        eg input: 395

        output: three nine five

3. Sort an array of integers in ascending order using adjacent element comparison and swapping (bubble sort algorithm)


4. Write a program to sort the names in an array of strings in alphabetical order. Use 2 dimentional character array to store the strings.

5. Write a program to sort the names in an array of strings in alphabetical order. Use 1 dimentional character pointer array to store the strings.

### 3.20 MULTIDIMENSIONAL ARRAYS (15/02/2022) ASSIGNMENT 20

1. Declare a two dimensional array of elements for sales details of a store, for each item, for each sales man. Take the sales values as input and print the array in matrix form.


        Find out and print the following :

        i) Total sales by each sales man
        ii) Total sales for a item
        iii) Total sales


2. Declare a two dimensional array of elements and find and print its transpose.

        eg.. if the matrix is :

        1 3
        4 5
        7 8

        its transpose should be :

                1 4 7
                3 5 8

3. Write a program  for matrix addition and subtraction.

4. Write a program  for matrix multiplication.

5. Search for an element in a two dimentional array, and print its position - as row and column numbers


6. Declare a three dimensional array of elements for sales details of a store, for x number of items, sold by y number of sales men , for a period of z number of days. Take the sales values as input and print the array in matrix form for each day. Also find and print the following :

        i) Total sales by each sales man per day.

        ii) Total sales of each item per day.

        iii) Total sales made by each sales man for z number of days.

        iv) Total sales of each item for z number of days.

        v) Total sales of the super market for z days.


### 3.19 POINTER ARITHMETIC (14/02/2022)  ASSIGNMENT 19

Implement the below functions using pointer increment method instead of index method with below declarations:

1. char * strcpy(char *s1,char *s2)

        copy s2 to s1 and return s1

2. char * strcat(char *s1, char *s2)

        concatenate s2 to s1 and return s1

3. int strcmp(char *s1, char *s2)
compare s1 and s2 and return the difference in numbers

4. char * strstr(char *s1, char *s2)

        match and return the address of substring s2 in s1
        eg., s1 : kernel masters
        s2: ers
        this returns &s1[11] as s1[11], s1[12] amd s1[13] are matching with ers.

5. char * strreplace(char *s1, char *s2, char *s3)

        replace every occurrence of string s2 with string s3 in main string s1, and return s1.

6. char * strrev(char *s)

        reverse the string s and return its base address.

7. Implement a macro to find the size of a variable.

8. Implement a macro to find size of a given data type.

        eg., sizeof(int) should be 4

## 2 BASIC C

### 2.18 PRE-PROCESSOR DIRECTIVES (12/02/2022) ASSIGNMENT 18

1. Write down a macro to find out the biggest of two numbers. MAX(x,y) should define code to find biggest of x and y.

2. Write down a macro to find the biggest of two numbers. Using this macro , write a macro to find biggest of 3 numbers.

3. Implement calculator program using macros. Write down your own header file ,where the calculator macros are defined(ADD,SUB,MUL,DIV).

4. WAP to print if  a character is alphanumeric , using nested macros.

5. WAP to print if a year is leap year or not. Modify the date validation program using this macro.

6. WAP to print a range of prime numbers. Use macro,to find if a number is prime or not.

7. Write a macro to print the biggest of three values. Try to call it and print the result for different data types, integer, float, double and character.

8. Define  a macro that receives an array and the number of elements in the array as arguments. Write a macro definition to print the array elements and call the macro. use it for different data types and size of the arrays.

9. Using the above macro, write a program to compute the sum of all elements in an array.

10. Write a macro to generate a generic function for swapping 2 numbers.

11. Write a macro to generate a generic function to compute the sum of all elements in an array.

### 2.17 POINTERS 2 (10/02/2022) ASSSIGNMENT 17

1. Write a program to swap two numbers using Call by Value and Call by Reference.

2. Note down the differences between Call by Value and Call by Reference and when to use what.

3. Write a function that can rotate the values of three variables. print the results in main function.

4. Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function.

5. Write a function that communicates with main using a single static variable without taking any input arguments.

        Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.

        eg., print the square of each number of an array :
        for each number of the array :
        call the function
        main gets the static variable address as return value from function.
        main puts the array element in static variable.
        in the function :
        create static variable.
        if static variable value is not zero, print its square.
        function sends static variable address back to main.

6. Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.

7. WAP copy 0x20 data in to 0x7800 memory location?

8. WAP to identify whether an architecture is Little Endian or Big Endian?

9. Find the size of a variable without using sizeof operator.

### 2.16 POINTERS (08/02/2022) ASSIGNMENT 16

1. Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the sizes of pointer and its indirected expression(apply * operator).

2. Write a program to add two variables using their pointers.

3. Write a program to take input for two character variables using pointers and find out which character has higher ascii value.

4. Declare different pointers with different base data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type ?

5. Write a program to find the biggest of three numbers using pointers that point to those numbers.

6. Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x. Do this using pointers that point to x,y and z.

7. Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.

### 2.15 STRINGS 2 (04/02/2022) ASSIGNMENT 15

1. Write a program to compare 2 strings.

       `int strcmp (char s1[], char s2[]);`

2. Write a program to compare 2 strings assuming case insensitive.

       `int stricmp (char s1[], char s2[]);`

3. Write a program to compare 2 strings only upto the first n character specified by the user.

       `int strncmp (char s1[], char s2[]);`

4. Write a program to replace all characters in a string with another character.

       `void strchrreplace (char str[], char c1, char c2);`

5. Write a program to count the total words in a string.

       `int countWords (char str[]);`

6. Write a program to search for a substring inside a string.

       `int strstr (char str[], char sub[]);`

7. Write a program to trim/remove all excess spaces before and after a string. (shouldn't remove spaces between words)

       `void trim (char str[]);`

8. Write a program to reverse the order of words in a string.

       `void wordReverse (char str[]);`

9. Write a program to convert stings to integer. Read documentation of *atoi* function.

       `int atoi (char str[]);`

10. Write a program to check if all characters are digits or not.

       `int inNumeric (char str[]);`


### 2.14 STRINGS (03/02/2022) ASSIGNMENT 14

1. Write a program to implement the string length functionality in a seperate function.

       `int strlen (char str[]);`

2. Write a program to implement the string copy functionality in a seperate function.

       `void strcpy (char s1[], char s2[];`

3. Write a program to implement the string concatenation functionality in a seperate function.

       `void strcat (char s1[], char s2[]);`

4. Write a program to convert all characters in an array to lowercase letters.

       `void strlwr (char s[]);`

5. Write a program to convert all the characters in an array to uppercase letters.

       `void strupr (char s[]);`

6. Write a program to reverse all the characters in an array.

       `void strrev (char str[]);`

7. Write a program to search a char inside an array and print its index.

       `int strchr (char s[], char c);`

### 2.13 ARRAYS (01/02/2022) ASSIGNMENT 13

1. Write the following program :

        Declare an integer array of size 100.
        Assign numbers 1-100 to each element of the array.
        Print all the numbers.
        Print all even elements.
        Print all odd elements.
        Add 5 to each element and print 6 – 105 numbers.

2. Declare an array of size 10. Enter 10 elements and save them in the array. Print the array. Find out the biggest and smallest numbers and their indexes and print it.

3. Write a program to search for a specific element given by the user, in an array and display its index.

4. Write a program to find the sum of all elements in an integer array, and print the sum.

5. Try experimenting with the below array syntaxes and see the results.

Check their sizes, try to also read values for elements and print them:


        `int arr[5] = {};`

        `int arr[10] = {2.4,5.6,7.3};`

        `int arr[3] = {1,2,3,4,5};`

        `int arr[0] = {};`

        `int arr[0] = {1,2,3,4,5};`

        `int arr[] = {};`

        `int arr[‘a’];`

6. Write a program to print an array in reverse order. Do not change the contents of array 1 (don't rewrite)

        `Input : array1 ={1,2,3,4,5};`

        `Output : array1 = {5,4,3,2,1};`

7. Write a program to reverse an array and print it:  (change the contents of array to new reversed content and then print them)

        `Input : array1 ={1,2,3,4,5};`

        `Output : array1 = {5,4,3,2,1};`

8. Write a program to print an integer in binary format.

9. Write a program to swap two arrays in reverse order.

        array1 = {1,2,3,4,5};

        array2 = { 6,7,8,9,10};

        Output

        array1 = {10,9,8,7,6}

        array2 = {5,4,3,2,1}

10. Write a code in C to receive an array of different integer values, and produce another array (list) of only the duplicated values in the original array, if a duplicate value is found more than once, the list shall only show one value, order is not important.

11. An array contains some numbers. You need to find out how many times the biggest number has occurred in that array in a single loop. (one loop to find the biggest and also to count the biggest)

12. Implement the following game in C so that computer always wins :

Game is played between the computer and a single user. There are 21 match sticks, computer and user is allowed to take less than 5 sticks on each turn.The player who is forced to pick up the last stick is the loser.

### 2.12 STORAGE CLASSES (29/01/2022) ASSIGNMENT 12


1)Write a program for the 4 departments of a super market : Sales, Purchase, Stock and SuperMarket in four different source code files.

Stock : Maintains a variable for available stock.

Sales : Has one function:

        Sell – It will reduce the stock by the number of items sold. Before selling check if enough stock is available.

Purchase : Has one function

        Purchase – will increase the stock by the number of items purchased.
        Set a max value for stock, before purchasing check if the stock room has enough space for new items or not.

SuperMarket :

Display menu with choices :

        1. Check AvailableStock

        2. Purchase new items  : maximum limit should be 500, if more than that, tell "Cant be purchased this time"

        3. Sell items : this should be continuous as long as the user wants to continue.

        4. Program should stop when the user wants to quit.


**USE THIS TABLE TO UNDERSTAND STORAGE CLASSES**

|Place of Declaration |SC |SCS |POS |DV |LIFETIME |SCOPE |
|--- |--- |--- |--- |--- |--- |--- |
|LOCAL(default) |automatic| auto | stack | GV| short(EOF)| EOB|
|GLOBAL(default) | external | extern | data | 0 | long(EOP)|EOF
|LOCAL| local static| static| data| 0 | long(EOP)| EOF|
|GLOBAL| global static| static| data| 0 | long(EOP) | EOB|
|LOCAL| register | register | CPU GP registers | GV | short(EOF)| EOB|


2)Supermarket Version 2.0

Following modifications should be made to the supermarket program version 1.0


3)WAP - with a function that prints the following message every nth time it is called

        Hello! I am called nth time.
Print the appropriate subscript after the n, depending on the last digit.
Output : The function should print the following ,

        I am called 1st time.
        I am called 2nd time.
        I am called 3rd time…etc.

The subscripts also should be printed appropriately.

        (st, nd ,rd and th etc.)

Hint : numbers ending with 1 will have st as subscript.


Numbers ending with 2 will have nd as subscript.


Similarly, numbers ending with 3 will have rd and all the remaining numbers will have th.


### KM44B LabTest C Functions 26JAN2022

#### LAB Test: Write a program for the given problem below, and copy paste in below questions.

Your program will be validated and given marks based on how  you followed the instructions exactly and maintained the given design in your program, along with output.

Exam timings: 6pm to 8pm. After 8pm ,form will stop accepting responses. You can edit your submission any number of times before 8pm. After 8pm do not edit your response even if it doesnt close as the time stamp will get updated.

Question carries 20 marks .

Write a Program for the following problem:

1) Write a program to read dates of birth of n candidates and choose who the elder is.
Whenever a date is scanned, verify if it is valid date or not. If it is not a valid date, ask for another date, until the user enters a valid date. Print the elder date in the format dss Month-yyyy.

Functions: Create the below files and functions as per below given design. if you need any extra files, you may create as per requirement:

FileName: main.c

1. main function

        // reads date-of-birth, n times in a loop. every date is validated using isvaliddate function. if it is valid then compare and keep the oldest date in a seperate set of variables. If the date is not valid, ask the user to enter another date, and repeate till he enters a valid date.
        //after loop is over, call printdateinformat and printsubscript functions to print the eldest date in required format.

FileName: isvaliddate.c

2. `int  IsValidDate(int  d, int  m, int  y)`

        // validates the date, returns 1 or 0

3. `int  IsLeapYear(int  y)`

        // checks if a year is leap year or not

FileName: compare.c

4. `int  DateCompare(int  d1,int  m1,int  y1,int  d2,int  m2,int  y2); `

        // compares 2 dates, returns 1 or 2 to indicate which date is old.

FileName: print.c

5. `void PrintDateinFormat(int  d,int  m,int  y);`

        // prints the given date in ddss Month-yyyy format

6. `void PrintSubscript(int d);`

        // prints the subscript for the date in above date format( th, rd or st).

FileName: dates.h

Declare all functions in this header file and include it in other files. Also include any required standard header files in this one only.

**Program should compile with zero warnings and zero errors when compiled with -Wall option.**

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

### 2.11 GLOBAL VARIABLES (26/01/2022) ASSIGNMENT 11

Rewrite the calculator program with add(), sub() etc functions like below:
Here, operand variables mean the variables which store the numbers on which any operation is to be performed.
Operation functions means `add()`, `sub()` etc functions.
operator variable is the variable that stores the character '+','-' etc as entered by the user.

1. Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function returns the result as return value.

2. Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable in operations file and be used to print in main.

3. Create the operand variables as global variables and the operator as an argument. result should be printed in function itself without returning.


### KM44B LabTest C Functions 24 JAN2022

LAB Test: Write a program for the given problem below, and copy paste them in the below questions, one file each.

Your program will be validated and given marks based on how  you followed the instructions exactly and maintained the given design in your program, along with output. Do not change the given design or write your own design.

**Exam timings: 6.00pm to 7.30pm. After 7.30pm ,form will stop accepting responses. You can edit your submission any number of times before 7.30pm. After 7.30pm do not edit your response even if it doesnt close as the time stamp will get updated.**

Question carries 20 marks .

Write a Program for the following problem:

1.Calculate the salary of an employee for a given month and year.

month, year, total monthly salary and numbeof r days of Loss of Pay (LOP) are provided as input.

Loss of Pay means the number of days for which employee wont get salary in that month.

Validate the negative cases like –ve salary value entered, -ve date or –ve year in main function, before calling other functions.
Print the net salary in main function.

Note:(Program must compile with 0 warnings when compiled with –Wall option)

Functions: Implement the below functions in seperate files as mentioned (File names are given above function names):

FileName: main.c

1) `main (int , int )`

        // takes input, calls calculatenetsalary function.


FileName: daysinmonth.c

2)`int  NoOfDaysinMonth(int  m, int  y);`

        // returns the number of days in a month

3)`int  IsLeapYear(int   y);`

        // checks if a year is leap year or not


FileName: calsal.c

3)`int  CalculateNetSalary(int  total, int  lop, int  m, int  y);`

        calculates and returns the net salary for a given month & year uses  NoOfDaysinMonthto calculate the one day salary.


Example:  Input:

Total salary of the employee: 10000

Month: 1 , Year: 2001

Number of LOPs: 3 (LOP: Days for which he will not get salary)

Hint: net salary : Total salary – Number of LOPS * Total salary / no of days in the given month

i.e., net salary : 10000 - 3 * 10000 / 31 (January has 31 days)

Output: Net payable salary is: 9032 /-


### 2.10 FUNCTIONS 1 (21/01/2022) ASSIGNMENT 10

1) Modify the calculator program - write functions `Add()`,`Sub()`,`Mul()`,`Div()`,`Mod()`. Each function should take the 2 numbers as inputs parameters and return the result as output. Print the result in main function, in switch statement.

2) Write a function that takes principle, rate of interest and time in months as input arguments, and returns the total amount to be repayed, after calculation of simple interest.

3) Write a function to determine if a character is alphanumeric or not.
        Hint: function can return a number to indicate alphanumeric (1) or not(0) and print the appropriate message in main function.

4) Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.

5) Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.

6) Write a function to accept two dates as input arguments, and return 1 if the first date is older, 0 if the second date is older.

7) Write a function that accepts a month and year as input, and returns the number of days of the month as output. Print the number of days in a given month and year in main function by using this function.

8) Write a function to accept a date as input and return 1 if it is valid, 0 if it is invalid. print the message in main function.

9) Write a function to return the product of two numbers without using * operator.

10) Write a function that can take an integer as input and return 1, if the number is prime number and 0 if it is not prime and print appropriate output message.
        return type is integer.
        IsPrime - returns int (0,1)

11)Write a program with a function that takes two integer arguments, and prints all prime numbers between those numbers using the prime number function written above. return type should be void.
        `PrintAllPrimes()` - return type is void. Should use `IsPrime()`
        Note: We can call anyfunction from any other function.

12) Write a function that takes an integer parameter and prints its multiplication table.return type should be void.

13) Write a function, that can take two integers as input, swap their values and print their new values.
        return type should be void

14) Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n without using * operator.
        Hint: call the multiplication function in power function.


### 2.9 (18/01/2022) ASSIGNMENT 9

1) Write a program to input a number and count the digits in it.

        Eg.
        0 - number of digits 1
        12 – number of digits 2
        155 – number of digits 3

2) Write a program to find out if an integer entered by a user is a prime number or not.(Count the number of factors for the number)

3) Write a program to print the first n Fibonacci numbers.

        Eg., First 8 Fibonacci numbers are :
        1  1  2  3  5  8  13  21

4)Write a program to find the reverse of an integer.
Hint: remove each digit and put it in the right place in another integer variable.

        eg., input 4675
        output: 5764

5)Modify the calculator program to perform the operations continuously until the user chooses not to continue further.

        eg., input: 3 + 4
        output: 3 + 4 = 7
        do you want to continue (y/n) ? y
        input: 4 * 8
        output: 4 * 8 = 32
        do you want to continue (y/n) ? n
        Thank you



Print the following patterns for a given n (number of rows)
        eg., n = 5
        *
        * *
        * * *
        * * * *
        * * * * *

6)using while ,do while and for loops:

        *
        * *
        * * *
        * * * *
        * * * * *

7)Without using nested loops :

        *
        * *
        * * *
        * * * *
        * * * * *

8)

        1
        2 2
        3 3 3
        4 4 4 4
        5 5 5 5 5

9)

        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5

10)

        1
        0 1
        1 0 1
        0 1 0 1
        1 0 1 0 1

11)

        5
        4 4
        3 3 3
        2 2 2 2
        1 1 1 1 1

12)

        5
        5 4
        5 4 3
        5 4 3 2
        5 4 3 2 1

13)

        1
        2    3
        4    5   6
        7    8   9    10
        11   12  13   14  15

14)

                5
              4 4
            3 3 3
          2 2 2 2
        1 1 1 1 1

15)

        5 5 5 5 5
        4 4 4 4
        3 3 3
        2 2
        1

16)

        1 2 3 4 5
          2 3 4 5
            3 4 5
              4 5
                5


17)

                *
              * * *
            * * * * *
          * * * * * * *
        * * * * * * * * *
          * * * * * * *
            * * * * *
              * * *
                *

18)

                   1
                 2 3 2
               3 4 5 4 3
             4 5 6 7 6 5 4
           5 6 7 8 9 8 7 6 5
             4 5 6 7 6 5 4
               3 4 5 4 3
                 2 3 2
                   1

### 2.8 WHILE LOOP (10/01/2022) ASSIGNMENT 8

1) Write a program to print all numbers from 1 to n.

2) Write a program to print all odd numbers and even numbers from m to n.

3) Write a program to print the sum of n given numbers (Positive / negative) and print the final sum.

4) Write a program to print the sum of positive numbers and negative numbers seperately in the above program.

        eg.,

5) Write a program to find the factorial of a given number.

        N! = n * n-1 * n-2 * …. 2 * 1

6) Find the product of 2 numbers without using multiplication symbol (use repeated addition)

7) Write a program to find the power of a given number to a given integer without using any builtin functions.

        eg., inputs: 5   3
        output: 5*5*5 = 125

8) Write a program to find out if an integer entered by a user is a prime number or not.

9) Write a program to input n numbers and print the largest and smallest numbers out of them.

        Eg., 3,23,56,34,78,45,26,90,68,77
        Biggest Number is 90
        Smallest Number is 3

### 2.7 OPERATORS 2 (06/01/2022) ASSIGNMENT 7

1) Write a program to find the biggest of two numbers using conditional operator.

2) Write a program to find the biggest of three numbers using conditional operator.

3) Write a program that determines whether a given integer is odd or even and displays the appropriate message.

4) Take three input integers x,y and z. Write a program to rotate their values such that, x has the value of y, y has the value of z and z has the value of x.

5) Find out the percentage of marks from 6 subjects and print it with 2 digit precision.

6) Write a program to print the size of various data types in C.

7) For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls. Write a program to read number of calls made and compute and print the bill.

8) check if a character is alphabet or not

9) Input an alphabet. Output its case reverse.

10) Input 3 digits, read them into three different characters. Make one integer out of them and display.

        Eg., input 345. char c =‘3’,b=‘4’,d=‘5’.
        Output : int i = 345.

11) check if a character is vowel or not

12) check if an year is leap year or not.

### 2.6 SWITCH (06/01/2022) ASSIGNMENT 6

1)C program to check whether a character is vowel or consonant using switch statement.

2)Write the calculator program using switch case statement.

3)Extend the percentage marks program to print the grade of the student as per below division , using switch statement.

        80 - 100        : Honours
        60 - 79         : First Division
        50 - 59         : Second Division
        40 - 49         : Third Division
        0 - 39          : Fail

4)C program to check whether a number is odd or even using switch statement.

5)C program to find maximum of two numbers using switch statement.

6)Write date validation program using switch statement.

### 2.5 LOGICAL OPERATORS (04/02/2022) ASSIGNMENT 5

1)check if a character is alphabet or not.

2)check if a character is vowel or not.

3)check if an year is leap year or not.

4)Find the power bill for the input number of units :

        0 - 200 units : 100/- min
        201 - 400 units : 100 + 0.65 per unit excess of 200
        401 - 600 units : 230 + 0.80 per unit excess of 400
        601 and above units : 390 + 1.00 per unit excess of 600

5)Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.

        80 - 100        : Honours
        60 - 79         : First Division
        50 - 59         : Second Division
        40 - 49         : Third Division
        0 - 39          : Fail

6)Write a program to find the biggest of three numbers using if else statements.

7)Write a program to find the biggest of four numbers.

### 1 LAB EXAM

#### 1.1 LAB TEST 1 ( 31/12/2021)

Find the denomination of notes to be printed for the given amount of money.

#### 1.2 LAB TEST 2 (03/02/2022)

Read a date from the user(day, month & year), and print if the given date is valid or not. Consider 1900 to 2200 is valid range for years.
Test this program for the below test cases.

        Input            expected output
        1)  2-1-1857	 Invalid Date
        2)  31-1-1900      Valid Date
        3)  31-2-2000      Invalid Date
        4)  31-3-2001      Valid Date
        5)  31-4-2001      Invalid Date
        6)  29-2-2000      Valid Date
        7)  28-2-2019      Valid Date
        8)  29-2-2001      Invalid Date
        9)  32-5-2000      Invalid Date
        10) 31-6-2005     Invalid Date
        11) 31-8-2004      Valid Date
        12) 30-9-2100      Valid Date
        13) 29-2-2200      InValid Date
        14) 5-12-2201      Invalid Date
        15) 31-11-2100    Invalid Date
        16) 30-12-2011    Valid Date
        17) 31-12-2011    Valid Date
        18) 20-13-2000    Invalid Date
        19) 30-2-2000     Invalid Date
        20) 10-31-2020    Invalid Date

### 2.4 IF ELSE (31/12/2021) ASSIGNMENT 4

1)Write a program to print the biggest of two numbers.

2)Write a program that determines whether a given integer is odd or even and displays the appropriate message.

3)For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls.     Write a program to read number of calls made and compute and print the bill.

4)check if a character is alphabet or not

5)Input an alphabet. Output its case reverse.

6)check if an year is leap year or not.

7)C program to check whether a character is vowel or consonant using switch statement

8)Take an integer as input and print its magnitude (remove sign).

9)Write a program to find the biggest of three numbers using if else statements.

10)C program to check whether a number is positive, negative or zero

11)Write a program to find the biggest of four numbers.

12)Write a calculator program that takes two integer numbers from user, and one of the operands +,-,* and / as a character and prints the appropriate result using if else.

13)"Find the power bill for the input number of units :

        0 - 200 units : 100/- min
        201 - 400 units : 100 + 0.65 per unit excess of 200
        401 - 600 units : 230 + 0.80 per unit excess of 400
        601 and above units : 390 + 1.00 per unit excess of 600

14)"Find the % of marks for 6 subjects, for a student, and print the grade of the student as per below division , using if else statement.

        80 - 100        : Honours
        60 - 79         : First Division
        50 - 59         : Second Division
        40 - 49         : Third Division
        0 - 39          : Fail

15) Read a 4 digit integer and print it in the below format:

        input: 3465

        output:
         5
        65
        465
        3465

### 2.3 OPERATORS (30/12/2021) ASSIGNMENT 3

1)Write a program that reads an integer and displays the right-most digit of the number.
(Eg: User enters, 456, the output should be 6).

2)Read a character and print its ascii value, and vice versa.

3)read a 4 digit number into a single integer variable and print it in the following formats using operators:
eg.> 4532
        OP1:
        2
        3
        5
        4

        OP2:
        4
        5
        3
        2

        OP3:
        4
        45
        453
        4532

        OP4:
        4532
        453
        45
        4

        OP5:
        //store the given number in another integer in reverse and print it
        2354

4)Read 2 integer variable values and swap their values and print back.

        eg.. a value 5
        b value 8

        output: a value is 8
        b value is 5

5)Read a four digit integer from user and print it in the following pattern.
        Input: 1234
                        1
                        34
                        234
                        1234

Implement using Operators and Escape sequences.

### 2.2 ESCAPE SEQUENCES (28/12/2021) (ASSIGNMENT 2)

   1) notedown and practice all escape sequences

   2) practice skip characters

   3) Read a 4 digit integer number into a variable ( eg., 4596) and print it in the below format using escape sequences:

        output:
        4596
        459
        45
        4


### 2.1 VARIABLES (27/12/2021) (ASSIGNMENT 1)

  1) List out the format specifiers for different datatypes.

  2) Create a variable for every datatype and try scanf and printf on those variables.

  3) Calculation of simple interest.

        steps:

        a)declare 2 integer variables p and n to represent principle and duration in months respectively.

        b)declare a floating point variable r to represent rate of interest.

        c)declare a floating point variable si to store simple interest after calculation.

        d)declare a float variable m to represent time duration in years.

        e)print the following indicative message using printf
        ""please enter principle,time in months and rate of interest""

        f)read the values of p ,n and r using scanf.

        g)devide n by 12.0 using / symbol and store the result in m, to convert time duration from months to years.

        Hint : m = n / 12.0;

        h)calculate simple interest using the below formula and store in si variable.

        si = p * m * r / 100;

        i) print si value to the user using printf.

  4)calculation of average of 4 numbers

  5)calculation of area and perimeter of rectangle,square and circle by taking the appropriate measurement as input.

  6)if sale price and profit of n items is given as input, find the cost price of 1 item.



## 1.MICROPROCESSOR
### 1.1 ALP (16/12/2021) ASSIGNMENT 1
#### 1. To find Odd No or Even No:
Write an ALP to find given number is odd or even and load number in 4000H memory
location the result stored in 6000H. If even, store 22H at memory location 6000 otherwise
store 11H at memory location 6000.
#### 2. Data transfer memory to memory:
Write an ALP to 16 bytes of data stored in memory locations at 2000H to 200FH. Transfer
the entire block of data to new memory locations starting at 4000H.
#### 3. To Perform Multiplication without using MUL instruction:
Write an ALP to perform multiplication of two numbers without using MUL instruction first
& second number stored in 4000H & 4001H memory locations respectively and the result
stored in 6000H?
#### 4. To Perform Division without using DIV instruction:
Write an ALP to perform division of two numbers without using DIV instruction first &
second number stored in 4000H & 4001H memory locations respectively and the result
stored in 6000H?
#### 5. To find average of 5 Numbers:
Write an ALP average of 5 numbers takes the numbers from 4000H to 4004H location and
store the result in 4005H?
#### 6. To Perform PUSH without using PUSH instruction:
Write an ALP if there is no PUSH instruction and implement same with two instructions
which perform same operation as PUSH B?
#### 7. Count No. of 1’s:
Write an ALP count no. of 1’s and load number in 4000H memory location the results stored
in 6000H?
#### 8. To Perform power of 2:
Write an ALP to find the given number is power 2 and load number in 4000H memory
location the result stored in 6000H? (If given no is power of 2, store 22H at memory location
6000

