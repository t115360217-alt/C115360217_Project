#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

#define SIZE 10

void P08(void)
{
    int n[SIZE] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    int i, j;

    printf("[P08] °}¦Cª½¤è¹Ï (Histogram):\n");
    printf("%s%13s%17s\n", "Element", "Value", "Histogram");

    for (i = 0; i < SIZE; i++)
    {
        printf("%7d%13d        ", i, n[i]);
        for (j = 1; j <= n[i]; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
}