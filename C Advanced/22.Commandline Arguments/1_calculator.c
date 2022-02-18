//sebin sebastian
//18/02/2022
/*Implement the calculator program using Command line arguments

        eg,, >./a.out 1 + 3

        output 1+3 = 4


        >./a.out 145 * 20

        output 145*20 = 2900*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
        for (int i = 0; i < argc; i++)
        {
                printf("%s\t",argv[i]);
        }
        if(argc == 4)
        {
                char * value = argv[2];
                printf("Sucess.\n");
                switch (*value)
                {
                        case '+':
                                printf("Addition: ");
                                printf("a + b =  %d\n", atoi(argv[1]) + atoi (argv[3]));
                                break;

                        case '-':
                                printf("Subtraction: a - b = : %d\n",atoi(argv[1]) - atoi (argv[3]));
                                break;

                        case '*':
                                printf("Multiplication: a * b = %d\n", atoi(argv[1]) * atoi (argv[3]));

                        case '/':
                                printf("Division: a / b = %d\n", atoi(argv[1]) / atoi (argv[3]));
                                break;

                }
        }
        else
        {
                printf("Wrong command line arguments.\n");
        }

}