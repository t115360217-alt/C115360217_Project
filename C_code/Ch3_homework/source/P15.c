#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "homework.h"

static int maximum(int x, int y, int z)
{
    int max = x;
    if (y > max)
    {
        max = y;
    }
    if (z > max)
    {
        max = z;
    }
    return max;
}

void P15(void)
{
    int number1, number2, number3;
    printf("[P15] Enter three integers: ");
    if (scanf("%d %d %d", &number1, &number2, &number3) == 3)
    {
        printf("Maximum is: %d\n", maximum(number1, number2, number3));
    }
}