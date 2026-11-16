#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

#define SIZE 12

void P07(void)
{
    int a[SIZE] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
    int i;
    int total = 0;

    for (i = 0; i < SIZE; i++)
    {
        total += a[i];
    }

    printf("[P07] 計算陣列元素總和:\n");
    printf("Total of array element values is %d\n", total);
}