#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    // 0--> snake.....1-->water......2-->gun
    printf("---\n");
    printf("Welcome to Snake, Water, Gun!\n");
    printf("Rules: Snake drinks Water, Water douses Gun, Gun kills Snake.\n");
    printf("---\n");
    printf("0 for snake,1 for water & 2 for gun\n");
    printf("select a number\n");
    scanf("%d", &player);
    printf("computer choose %d\n", computer);
    if (player == 0 && computer == 0)
    {
        printf("it's draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("computer wins\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("player wins\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("its draw!!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("computer wins\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("player wins\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("its draw!!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("computer wins\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("player wins\n");
    }
    else
    {
        ("something wents wrong");
    }
    printf("thank you for playing!! ;)");
    return 0;
}