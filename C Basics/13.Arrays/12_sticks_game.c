//sebin sebastian
//03/02/2022
/*Implement the following game in C so that computer always wins :
Game is played between the computer and a single user. 
There are 21 match sticks, computer and user is allowed to take less than 5 sticks on each turn.
The player who is forced to pick up the last stick is the loser. */

#include <stdio.h>

int main()
{
    int sticks = 21, computer,user;
    printf("Welcome to the 21 stick game.\n");
    printf("You can pick a minimum of 1 stick and maximum of 4 sticks.\n");

    while (sticks > 1)
    {
        printf("Enter sticks you want: ");
        scanf("%d",&user);

        switch (user)
        {
            case 1:
                sticks = sticks - user;
                computer = 5 - user;
                printf("Computer choose : %d\n",computer);
                sticks = sticks - computer;
                break;

            case 2:
                sticks = sticks - user;
                computer = 5 - user;
                printf("Computer choose : %d\n",computer);
                sticks = sticks - computer;
                break;
            
            case 3:
                sticks = sticks - user;
                computer = 5 - user;
                printf("Computer choose : %d\n",computer);
                sticks = sticks - computer;
                break;
            
            case 4:
                sticks = sticks - user;
                computer = 5 - user;
                printf("Computer choose : %d\n",computer);
                sticks = sticks - computer;
                break;
            
            default:
                printf("Invalid. You can only choose 1 to 4 sticks.\nEnter 1,2,3 or 4 only.\n");
                break;
        }
    }
}
