#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

void P26(void)
{
    char array[5];

    printf("[P26] 驗證陣列名稱即為第一個元素的記憶體位址:\n");
    printf("    array = %p\n&array[0] = %p\n   &array = %p\n",
        (void*)array, (void*)&array[0], (void*)&array);
}