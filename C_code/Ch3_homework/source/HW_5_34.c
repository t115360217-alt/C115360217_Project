#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "homework.h"

static long long recursivePower(int base, int exponent)
{
    if (exponent == 1)
    {
        return base;
    }
    return (long long)base * recursivePower(base, exponent - 1);
}

void HW_5_34(void)
{
    int base, exp;
    printf("[HW 5.34] 遞迴次方計算 (exponent >= 1)\n");
    printf("請輸入 base 與 exponent: ");
    if (scanf("%d %d", &base, &exp) == 2)
    {
        if (exp < 1)
        {
            printf("錯誤：exponent 必須 >= 1\n");
            return;
        }
        printf("%d^%d = %lld\n", base, exp, recursivePower(base, exp));
    }
}