#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void HW_3_18(void)
{
    double sales;
    double salary;

    while (1) {
        printf("Enter sales in dollars (-1 to end): ");
        if (scanf("%lf", &sales) != 1 || sales == -1.0) {
            break;
        }

        salary = 200.0 + sales * 0.09;
        printf("Salary is: $%.2f\n\n", salary);
    }

    return;
}