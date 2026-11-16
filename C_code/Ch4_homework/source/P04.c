#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

void P04(void)
{
    int n[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        n[i] = 0;
    }

    printf("[P04] 基本一維陣列設為 0:\n");
    printf("%s%13s\n", "Element", "Value");
    for (i = 0; i < 10; i++)
    {
        printf("%7d%13d\n", i, n[i]);
    }
}