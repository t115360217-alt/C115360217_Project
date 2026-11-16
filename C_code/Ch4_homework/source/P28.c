#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

#define SIZE 5

static void modifyArray(int b[], int size)
{
    int j;
    for (j = 0; j < size; j++)
    {
        b[j] *= 2;
    }
}

static void modifyElement(int e)
{
    printf("Value in modifyElement is %d\n", e *= 2);
}

void P28(void)
{
    int a[SIZE] = { 0, 1, 2, 3, 4 };
    int i;

    printf("[P28] 傳遞整個陣列與單一元素比較:\n");
    printf("Effects of passing entire array by reference:\n\n"
        "The values of the original array are:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");

    modifyArray(a, SIZE);

    printf("The values of the modified array are:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }

    printf("\n\n\nEffects of passing array element by value:\n\n"
        "The value of a[3] is %d\n", a[3]);
    modifyElement(a[3]);
    printf("The value of a[3] is %d\n", a[3]);
}