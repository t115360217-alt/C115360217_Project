#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void HW_3_20(void)
{
    double hours;
    double rate;
    double salary;

    while (1) {
        printf("Enter # of hours worked (-1 to end): ");
        if (scanf("%lf", &hours) != 1 || hours == -1.0) {
            break;
        }

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &rate);

        if (hours <= 40.0) {
            salary = hours * rate;
        }
        else {
            salary = 40.0 * rate + (hours - 40.0) * rate * 1.5;
        }

        printf("Salary is $%.2f\n\n", salary);
    }

    return;
}