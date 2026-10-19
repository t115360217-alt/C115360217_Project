#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS

void HW_4_15(void)
{
    double principal = 5000.0;

    // 利率從 10.0% 到 12.0%，每次遞增 0.5% (使用整數避免浮點數累積誤差)
    for (int rateInt = 100; rateInt <= 120; rateInt += 5) {
        double rate = rateInt / 1000.0;
        printf("\nInterest Rate: %.1f%%\n", rate * 100.0);
        printf("%4s%21s\n", "Year", "Amount on deposit");

        for (int year = 1; year <= 15; ++year) {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4d%21.2f\n", year, amount);
        }
    }

    return;
}