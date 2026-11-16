#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

#define SIZE 10

void P06(void)
{
    int s[SIZE];
    int j;

    for (j = 0; j < SIZE; j++)
    {
        s[j] = 2 + 2 * j;
    }

    printf("[P06] 使用 #define 設定陣列大小:\n");
    printf("%s%13s\n", "Element", "Value");
    for (j = 0; j < SIZE; j++)
    {
        printf("%7d%13d\n", j, s[j]);
    }
}