#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "homework.h"

static char changeCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + ('a' - 'A');
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        return ch - ('a' - 'A');
    }
    return ch;
}

void HW_5_28(void)
{
    char inputChar;
    printf("[HW 5.28] 請輸入一個英文字母: ");
    while (getchar() != '\n'); // 清除前次殘留字元
    if (scanf("%c", &inputChar) == 1)
    {
        printf("大小寫轉換結果: %c\n", changeCase(inputChar));
    }
}