#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

static void inverse(int* b)
{
    int tmp[3], i;
    for (i = 0; i < 3; i++)
    {
        tmp[2 - i] = b[i];
    }
    for (i = 0; i < 3; i++)
    {
        b[i] = tmp[i];
    }
}

void P30(void)
{
    int a[3] = { 3, 5, 7 };
    int i;

    printf("[P30] °}¦C¤ÏÂà (Call by address):\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");

    inverse(a);

    for (i = 0; i < 3; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
}