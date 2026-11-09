#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "homework.h"

static double Power(double X, int n)
{
    int i;
    double PowerXn = 1.0;
    for (i = 1; i <= n; i++)
    {
        PowerXn = PowerXn * X;
    }
    return PowerXn;
}

void P13(void)
{
    int k;
    double Ans;
    printf("[P13] 計算 3.5 的 k 次方? 請輸入 k: ");
    if (scanf("%d", &k) == 1)
    {
        Ans = Power(3.5, k);
        printf("3.5 的 %d 次方 = %f\n", k, Ans);
    }
}