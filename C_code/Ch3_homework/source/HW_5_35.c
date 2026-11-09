#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "homework.h"

static unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    unsigned long long int c = 0;
    unsigned int i;

    if (n == 0) return 0;
    if (n == 1) return 1;

    for (i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

void HW_5_35(void)
{
    unsigned int n;
    unsigned long long int f0 = 0, f1 = 1, f2 = 0;
    unsigned int max_n = 1;

    printf("[HW 5.35] Fibonacci 數列計算 (非遞迴)\n");
    printf("請輸入欲計算的項數 n: ");
    if (scanf("%u", &n) == 1)
    {
        printf("Fibonacci(%u) = %llu\n", n, fibonacci(n));
    }

    // 尋找 unsigned long long int 不溢位的最大項數
    while (1)
    {
        f2 = f0 + f1;
        if (f2 < f1) // 溢位檢查 (unsigned overflow)
        {
            break;
        }
        f0 = f1;
        f1 = f2;
        max_n++;
    }
    printf("\n[系統上限測定]\n");
    printf("unsigned long long int 型態下可正確印出的最大項數為 Fibonacci(%u) = %llu\n", max_n, f1);
}