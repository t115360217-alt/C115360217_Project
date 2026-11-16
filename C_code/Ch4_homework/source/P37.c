#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

#define SIZE 100

static int linearSearch(const int array[], int key, int size)
{
    int n;
    for (n = 0; n < size; ++n)
    {
        if (array[n] == key)
        {
            return n;
        }
    }
    return -1;
}

void P37(void)
{
    int a[SIZE];
    int x;
    int searchKey;
    int element;

    for (x = 0; x < SIZE; x++)
    {
        a[x] = 2 * x;
    }

    printf("[P37] 線性搜尋 (Linear Search, 陣列內容為 0, 2, 4, ..., 198):\n");
    printf("Enter integer search key: ");
    if (scanf("%d", &searchKey) == 1)
    {
        element = linearSearch(a, searchKey, SIZE);
        if (element != -1)
        {
            printf("Found value in element %d\n", element);
        }
        else
        {
            printf("Value not found\n");
        }
    }
}