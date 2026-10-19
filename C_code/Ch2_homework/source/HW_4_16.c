#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void HW_4_16(void)
{
    int i, j;

    // 圖案 (A)：靠左遞增
    printf("(A)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    // 圖案 (B)：靠左遞減
    printf("\n(B)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    // 圖案 (C)：靠右遞減（前方補空格）
    printf("\n(C)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= 10 - i; j++) {
            printf("%s", " ");
        }
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    // 圖案 (D)：靠右遞增（前方補空格）
    printf("\n(D)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10 - i; j++) {
            printf("%s", " ");
        }
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    return;
}