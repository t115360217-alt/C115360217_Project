#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

static void staticArrayInit(void)
{
    static int array1[3];
    int i;

    printf("\nValues on entering staticArrayInit:\n");
    for (i = 0; i <= 2; i++)
    {
        printf("array1[%d] = %d  ", i, array1[i]);
    }

    printf("\nValues on exiting staticArrayInit:\n");
    for (i = 0; i <= 2; i++)
    {
        printf("array1[%d] = %d  ", i, array1[i] += 5);
    }
}

static void automaticArrayInit(void)
{
    int array2[3] = { 1, 2, 3 };
    int i;

    printf("\n\nValues on entering automaticArrayInit:\n");
    for (i = 0; i <= 2; i++)
    {
        printf("array2[%d] = %d  ", i, array2[i]);
    }

    printf("\nValues on exiting automaticArrayInit:\n");
    for (i = 0; i <= 2; i++)
    {
        printf("array2[%d] = %d  ", i, array2[i] += 5);
    }
}

void P21(void)
{
    printf("[P21] Static 與 Automatic 陣列生命週期比較:\n");
    printf("First call to each function:\n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSecond call to each function:\n");
    staticArrayInit();
    automaticArrayInit();
    printf("\n");
}