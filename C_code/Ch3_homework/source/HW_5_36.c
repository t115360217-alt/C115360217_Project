#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "homework.h"

static void towers(int n, char fromPeg, char toPeg, char auxPeg)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", fromPeg, toPeg);
        return;
    }

    towers(n - 1, fromPeg, auxPeg, toPeg);
    printf("Move disk %d from %c to %c\n", n, fromPeg, toPeg);
    towers(n - 1, auxPeg, toPeg, fromPeg);
}

void HW_5_36(void)
{
    int disks;
    printf("[HW 5.36] 河內塔 (Towers of Hanoi)\n");
    printf("請輸入盤子數量: ");
    if (scanf("%d", &disks) == 1)
    {
        if (disks <= 0)
        {
            printf("盤子數量必須大於 0\n");
            return;
        }
        printf("移動步驟如下 (從柱子 A 搬移至柱子 C，柱子 B 為輔助):\n");
        towers(disks, 'A', 'C', 'B');
    }
}