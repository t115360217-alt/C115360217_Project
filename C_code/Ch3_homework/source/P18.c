#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "homework.h"

void P18(void)
{
    char string1[60] = "Welcome";
    char string2[60];
    int len;

    printf("[P18] strcpy 與 strlen 示範:\n");
    strcpy(string2, string1);
    printf("string2 = %s\n", string2);

    len = (int)strlen(string2);
    printf("字串長度為 %d\n", len);
}