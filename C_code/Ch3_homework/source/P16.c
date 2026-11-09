#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "homework.h"

void P16(void)
{
    int x;
    printf("[P16] 1~10 ¶}¥­¤è®Ú (sqrt):\n");
    for (x = 1; x <= 10; x++)
    {
        printf("%.2f ", sqrt((double)x));
    }
    printf("\n");
}