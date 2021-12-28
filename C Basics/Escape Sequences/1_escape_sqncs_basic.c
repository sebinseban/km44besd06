//sebin sebastian
//escape sequences
//just using every escape character and explaining what each escape character does


#include<stdio.h>
int main()
{
    
    printf("Hello, wor\b\bld\n"); // \b usage, the cursor will move back 2 times in this case
    printf("Hi \a \n");           // \a will produce an audible alert, doesnt support on all machines
    printf("Put a tab \t here\n");// \t will produce a tab (4 spaces)     \n is used for newline, will move the cursor to newline
    printf("Clears all\rhello\n");     // \r will clear everything to the left of the cursor,replace with whats after \r, carriage return
    printf("How does \f form feed works?\n");  // \f is similar to \v, will move text to the next line continuing from where it left off
    printf("Is vertilcal tab \v same as form feed?\n");  //similar output of that while using \f. \v stands for vertical tab
    printf("\'put this line in single qoutes\'\n"); // \' is how you produce a single qoute inside printf function
    printf("\"put this line in double qoutes\"\n"); // \" is how you produce a double qoute inside printf function
    printf("How to print a question mark like this \?\n");   // \? is how you produce a question mark inside printf function
    //printf("You can print hexadecimal also via printf. Hexcode :%d", x); //doesnt work
    //printf("You can print octal also via printf. Octal: \nnn");          //doesnt work
}