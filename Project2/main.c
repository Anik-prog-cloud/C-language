#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int player, computer = rand() % 3;
    // 0-->snake
    // 1-->water
    // 2-->gun

    printf("Choose 0 for Snake, 1 for Water and 2 for Gun\n");
    scanf("%d", &player);
    printf("Computer choose %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("Its a Draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You lose!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You lose!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its a Draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You lose!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its a Draw!\n");
    }

    return 0;
}