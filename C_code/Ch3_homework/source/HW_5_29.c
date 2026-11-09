#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "homework.h"

static int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

static int lcm(int a, int b)
{
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

void HW_5_29(void)
{
    int num1, num2;
    printf("[HW 5.29] 請輸入兩個整數以求最小公倍數 (LCM): ");
    if (scanf("%d %d", &num1, &num2) == 2)
    {
        printf("LCM(%d, %d) = %d\n", num1, num2, lcm(num1, num2));
    }
}