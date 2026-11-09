#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "homework.h"

static long factorial(long number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}

void P27(void)
{
    int i;
    printf("[P27] »¼°j¶¥­¼´ú¸Õ (0! ~ 10!):\n");
    for (i = 0; i <= 10; i++)
    {
        printf("%2d! = %ld\n", i, factorial(i));
    }
}