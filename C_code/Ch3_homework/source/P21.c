#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "homework.h"

void P21(void)
{
    int i;
    unsigned int seed;
    printf("[P21] Enter seed: ");
    if (scanf("%u", &seed) == 1)
    {
        srand(seed);
        for (i = 1; i <= 10; i++)
        {
            printf("%10d", 1 + (rand() % 6));
            if (i % 5 == 0)
            {
                printf("\n");
            }
        }
    }
}