#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "homework.h"

static int square(int y)
{
    return y * y;
}

void P12(void)
{
    int x;
    printf("[P12] 平方副程式示範:\n");
    for (x = 1; x <= 10; x++)
    {
        printf("%d ", square(x));
    }
    printf("\n");
}