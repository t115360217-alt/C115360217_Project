#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

#define SIZE 10

void HW_6_11(void)
{
    int a[SIZE] = { 26, 5, 81, 7, 63, 12, 95, 34, 48, 19 };
    int pass, i, hold;
    int swapped; // 紀錄該回合是否發生過交換

    printf("[HW 6.11] 改良版氣泡排序法 (Bubble Sort)\n");
    printf("原始陣列資料:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n\n");

    // 改良 (a): 每回合比較次數逐次減少 (SIZE - 1 - pass)
    // 改良 (b): 若某回合完全沒有發生交換 (swapped == 0)，代表已排序完成，提早結束
    for (pass = 0; pass < SIZE - 1; pass++)
    {
        swapped = 0;

        for (i = 0; i < SIZE - 1 - pass; i++)
        {
            if (a[i] > a[i + 1])
            {
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
                swapped = 1;
            }
        }

        printf("Pass %d 結果 (比較 %d 次): ", pass + 1, SIZE - 1 - pass);
        for (i = 0; i < SIZE; i++)
        {
            printf("%4d", a[i]);
        }
        printf("\n");

        if (swapped == 0)
        {
            printf("-> 本回合無任何交換，陣列已排序完成，提早終止迴圈！\n");
            break;
        }
    }

    printf("\n最終排序結果:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");
}