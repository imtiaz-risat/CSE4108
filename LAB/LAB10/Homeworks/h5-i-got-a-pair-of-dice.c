#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice()
{
    int dice1 = 1 + rand() % 6;
    int dice2 = 1 + rand() % 6;
    return dice1 + dice2;
}
bool play_game()
{
    bool firstmove = true;
    int point;
    while (true)
    {
        if (firstmove)
        {
            firstmove = false;
            int roll = roll_dice();
            printf("You rolled: %d\n", roll);
            if (roll == 7 || roll == 11)
            {
                printf("You win!\n");
                return true;
            }
            else if (roll == 2 || roll == 3 || roll == 12)
            {
                printf("You lose!\n");
                return false;
            }
            else
            {
                point = roll;
                printf("Your point is %d\n", point);
            }
        }
        else
        {
            int roll = roll_dice();
            printf("You rolled: %d\n", roll);
            if (roll == point)
            {
                printf("You win!\n");
                return true;
            }
            else if (roll == 7)
            {
                printf("You lose!\n");
                return false;
            }
        }
    }

    return false;
}

int main()
{
    srand((unsigned)time(NULL));

    int won = 0, lost = 0;
    while (true)
    {
        if (play_game())
            won++;
        else
            lost++;

        printf("Play again? ");
        char c;
        scanf("%c", &c);
        getchar();
        if (c != 'y' && c != 'Y')
            break;
    }
    printf("Wins: %d Losses: %d", won, lost);

    return 0;
}
