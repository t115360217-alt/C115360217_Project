#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "homework.h"

enum Status { CONTINUE, WON, LOST };

static int rollDice(void)
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);
    int workSum = die1 + die2;
    printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
    return workSum;
}

void P23(void)
{
    int sum;
    int myPoint;
    enum Status gameStatus;

    srand((unsigned int)time(NULL));
    printf("[P23] Craps 骰子遊戲開始:\n");

    sum = rollDice();

    switch (sum)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n", myPoint);
        break;
    }

    while (gameStatus == CONTINUE)
    {
        sum = rollDice();
        if (sum == myPoint)
        {
            gameStatus = WON;
        }
        else if (sum == 7)
        {
            gameStatus = LOST;
        }
    }

    if (gameStatus == WON)
    {
        printf("Player wins\n");
    }
    else
    {
        printf("Player loses\n");
    }
}