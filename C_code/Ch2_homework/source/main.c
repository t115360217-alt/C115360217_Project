#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int SW = 0;
int main()
{
    printf("¿é¤JÃD¸¹¡G");

    scanf("%d", &SW);
    switch (SW)
    {
    case 1:
        HW_3_17();
        break;
    case 2:
        HW_3_18();
        break;
    case 3:
        HW_3_19();
        break;
    case 4:
        HW_3_20();
        break;
    case 5:
        HW_3_33();
        break;
    case 6:
        HW_4_15();
        break;
    case 7:
        HW_4_16();
        break;
    case 8:
        HW_4_27();
        break;
    case 9:
        HW_4_28();
        break;
    case 10:
        HW_4_31();
        break;
    default:
        break;
    }
}