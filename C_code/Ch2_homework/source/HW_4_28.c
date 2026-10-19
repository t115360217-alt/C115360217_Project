#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void HW_4_28(void)
{
    int paycode;
    double salary;
    double hourlyWage, hours, overtimeHours;
    double grossSales;
    int pieces;
    double wagePerPiece;

    while (1) {
        printf("Enter paycode (-1 to end): ");
        if (scanf("%d", &paycode) != 1 || paycode == -1) {
            break;
        }

        switch (paycode) {
        case 1: // 經理 (Manager)
            printf("Enter manager's fixed weekly salary: ");
            scanf("%lf", &salary);
            printf("Manager's pay is $%.2f\n\n", salary);
            break;

        case 2: // 計時人員 (Hourly worker)
            printf("Enter hourly wage: ");
            scanf("%lf", &hourlyWage);
            printf("Enter hours worked: ");
            scanf("%lf", &hours);

            if (hours <= 40.0) {
                salary = hours * hourlyWage;
            }
            else {
                overtimeHours = hours - 40.0;
                salary = 40.0 * hourlyWage + overtimeHours * hourlyWage * 1.5;
            }
            printf("Hourly worker's pay is $%.2f\n\n", salary);
            break;

        case 3: // 佣金人員 (Commission worker)
            printf("Enter gross weekly sales: ");
            scanf("%lf", &grossSales);
            salary = 250.0 + 0.057 * grossSales;
            printf("Commission worker's pay is $%.2f\n\n", salary);
            break;

        case 4: // 計件人員 (Pieceworker)
            printf("Enter number of pieces produced: ");
            scanf("%d", &pieces);
            printf("Enter wage per piece: ");
            scanf("%lf", &wagePerPiece);
            salary = pieces * wagePerPiece;
            printf("Pieceworker's pay is $%.2f\n\n", salary);
            break;

        default:
            printf("Invalid paycode. Please enter 1, 2, 3, or 4.\n\n");
            break;
        }
    }

    return;
}