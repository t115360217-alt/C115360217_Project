#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void HW_3_33(void)
{
    int length;
    int breadth;

    printf("Enter length: ");
    if (scanf("%d", &length) != 1) return;

    printf("Enter breadth: ");
    if (scanf("%d", &breadth) != 1) return;

    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= breadth; j++) {
            // 邊界位置印出 '+'，內部印出空格
            if (i == 1 || i == length || j == 1 || j == breadth) {
                printf("+");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return;
}