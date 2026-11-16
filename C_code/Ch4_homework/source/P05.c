#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

void P05(void)
{
    int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
    int i;

    printf("[P05] 初始化列表設定陣列:\n");
    printf("%s%13s\n", "Element", "Value");
    for (i = 0; i < 10; i++)
    {
        printf("%7d%13d\n", i, n[i]);
    }
}