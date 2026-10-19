#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void HW_4_27(void)
{
    int side1, side2, hypotenuse;
    int count = 0;

    printf("%-10s%-10s%-10s\n", "Side 1", "Side 2", "Hypotenuse");

    // 三層暴力搜尋 1 到 500 的所有整數組合
    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = 1; side2 <= 500; side2++) {
            for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++) {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    printf("%-10d%-10d%-10d\n", side1, side2, hypotenuse);
                    count++;
                }
            }
        }
    }

    printf("\nTotal triples found: %d\n", count);

    return;
}