#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void HW_3_17(void)
{
    int accountNumber;
    double beginningBalance;
    double totalCharges;
    double totalCredits;
    double creditLimit;
    double newBalance;

    while (1) {
        printf("Enter account number (-1 to end): ");
        if (scanf("%d", &accountNumber) != 1 || accountNumber == -1) {
            break;
        }

        printf("Enter beginning balance: ");
        scanf("%lf", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%lf", &totalCharges);

        printf("Enter total credits: ");
        scanf("%lf", &totalCredits);

        printf("Enter credit limit: ");
        scanf("%lf", &creditLimit);

        newBalance = beginningBalance + totalCharges - totalCredits;

        if (newBalance > creditLimit) {
            printf("Account:      %d\n", accountNumber);
            printf("Credit limit: %.2f\n", creditLimit);
            printf("Balance:      %.2f\n", newBalance);
            printf("Credit Limit Exceeded.\n");
        }
        printf("\n");
    }

    return;
}