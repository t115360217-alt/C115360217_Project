#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void HW_3_19(void)
{
    double principal;
    double rate;
    int days;
    double interest;

    while (1) {
        printf("Enter loan principal (-1 to end): ");
        if (scanf("%lf", &principal) != 1 || principal == -1.0) {
            break;
        }

        printf("Enter interest rate: ");
        scanf("%lf", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        interest = principal * rate * days / 365.0;
        printf("The interest charge is $%.2f\n\n", interest);
    }

    return;
}