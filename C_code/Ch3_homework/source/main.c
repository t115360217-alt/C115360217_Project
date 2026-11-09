#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "homework.h"

int main(void)
{
    int choice = 0;

    while (1)
    {
        printf("\n================ HW3 作業選單 ================\n");
        printf(" [投影片題目]\n");
        printf("  1. P12 (Square function)\n");
        printf("  2. P13 (Power function)\n");
        printf("  3. P15 (Maximum of 3 integers)\n");
        printf("  4. P16 (Square root table)\n");
        printf("  5. P18 (String copy & length)\n");
        printf("  6. P20 (Roll a 6-sided die)\n");
        printf("  7. P21 (Roll die with seed)\n");
        printf("  8. P23 (Craps game)\n");
        printf("  9. P27 (Recursive Factorial)\n");
        printf(" [課本習題]\n");
        printf(" 10. Exercise 5.28 (Changing case)\n");
        printf(" 11. Exercise 5.29 (LCM)\n");
        printf(" 12. Exercise 5.34 (Recursive power)\n");
        printf(" 13. Exercise 5.35 (Fibonacci & max)\n");
        printf(" 14. Exercise 5.36 (Towers of Hanoi)\n");
        printf("  0. 結束離開\n");
        printf("==============================================\n");
        printf("請輸入題號代碼 (0-14): ");

        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n'); // 清除緩衝區
            printf("輸入錯誤，請重新輸入整數。\n");
            continue;
        }

        printf("\n----------------------------------------------\n");
        switch (choice)
        {
        case 1:  P12(); break;
        case 2:  P13(); break;
        case 3:  P15(); break;
        case 4:  P16(); break;
        case 5:  P18(); break;
        case 6:  P20(); break;
        case 7:  P21(); break;
        case 8:  P23(); break;
        case 9:  P27(); break;
        case 10: HW_5_28(); break;
        case 11: HW_5_29(); break;
        case 12: HW_5_34(); break;
        case 13: HW_5_35(); break;
        case 14: HW_5_36(); break;
        case 0:
            printf("程式結束。\n");
            return 0;
        default:
            printf("無此題號，請重新輸入！\n");
            break;
        }
        printf("----------------------------------------------\n");
        system("pause");
    }

    return 0;
}