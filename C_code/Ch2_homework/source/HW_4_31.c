#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void HW_4_31(void)
{
    int row, space, asterisk;

    // 上半部 5 列（1 到 5）
    for (row = 1; row <= 5; row++) {
        for (space = 1; space <= 5 - row; space++) {
            printf("%s", " ");
        }
        for (asterisk = 1; asterisk <= 2 * row - 1; asterisk++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    // 下半部 4 列（4 倒數至 1）
    for (row = 4; row >= 1; row--) {
        for (space = 1; space <= 5 - row; space++) {
            printf("%s", " ");
        }
        for (asterisk = 1; asterisk <= 2 * row - 1; asterisk++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    return;
}