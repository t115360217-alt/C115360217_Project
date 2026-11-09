#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "homework.h"

void P20(void)
{
    int i;
    printf("[P20] 擲骰子 20 次 (固定 rand 序列示範):\n");
    for (i = 1; i <= 20; i++)
    {
        printf("%10d", 1 + (rand() % 6));
        if (i % 5 == 0)
        {
            printf("\n");
        }
    }
}