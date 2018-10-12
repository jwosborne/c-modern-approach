/* Program that simulates the game of craps */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h> /* srand */

int roll_dice(void);
bool play_game(void);

int main(void)
{
    char ch = 'n';
    srand(time(NULL));
    do
    {
        if (play_game())
            printf("You win!\n");
        else
            printf("You lose!\n");
        /* We are going to assume the user picks 'y' or 'n'
           a serious application would have more
           input validatoin */
        printf("Play again? (y or n): ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    return 0;
}

/* Generate two random numbers between 1 and 6 */
/* @return: sum - int sum of both random numbers*/
int roll_dice(void)
{
    int roll_A = (rand() % 6) + 1;
    int roll_B = (rand() % 6) + 1;
    return roll_A + roll_B;
}
/* Play one game of craps */
/* @return: win - bool which is true if game won*/
bool play_game(void)
{
    int dice, point;
    /* first roll */
    dice = roll_dice();
    printf("You rolled: %d\n", dice);
    if (dice == 7 || dice == 11)
    {
        return true;
    }
    if (dice == 2 || dice == 3 || dice == 12)
    {
        return false;
    }

    point = dice;
    printf("Your point is %d\n", point);

    /* continue rolling until a condition roll is met */
    while (1)
    {
        dice = roll_dice();
        printf("You rolled: %d\n", dice);
        if (dice == point)
        {
            return true;
        }
        else if (dice == 7)
        {
            return false;
        }
    }
}