#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

// 原投影片為 C++ 語法 int addbyone(int &xref)，在純 C 專案中以指標實現同等修改效果
static int addbyone_ref(int* xref)
{
    (*xref)++;
    printf("xref=%d\n", *xref);
    return *xref;
}

void P25(void)
{
    int x = 100;
    int y;

    printf("[P25] Call by reference 概念示範 (C 語言相容寫法):\n");
    y = addbyone_ref(&x);
    printf("x=%d\n", x);
    (void)y;
}