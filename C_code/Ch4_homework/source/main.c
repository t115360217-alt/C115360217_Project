#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "../include/homework.h"

int main(void)
{
    int choice = 0;

    while (1)
    {
        printf("\n================ HW4 作業選單 ================\n");
        printf(" [第四章投影片題目]\n");
        printf("  1. P04 (一維陣列初始化為 0)\n");
        printf("  2. P05 (一維陣列初始化列表)\n");
        printf("  3. P06 (#define 陣列大小與偶數賦值)\n");
        printf("  4. P07 (計算一維陣列總和)\n");
        printf("  5. P08 (陣列直方圖 Histogram)\n");
        printf("  6. P13 (二維陣列初始化印出)\n");
        printf("  7. P14 (二維陣列成績最高/最低/平均)\n");
        printf("  8. P19 (字元陣列與字串輸入輸出)\n");
        printf("  9. P21 (Static 與 Automatic 陣列比較)\n");
        printf(" 10. P25 (Call by reference / 傳參考示範)\n");
        printf(" 11. P26 (印出陣列位址驗證)\n");
        printf(" 12. P28 (傳遞整個陣列與單一元素)\n");
        printf(" 13. P30 (陣列反轉 Call by address)\n");
        printf(" 14. P37 (線性搜尋 Linear Search)\n");
        printf(" [課本習題]\n");
        printf(" 15. Exercise 6.11 (改良版氣泡排序 Bubble Sort)\n");
        printf("  0. 結束離開\n");
        printf("==============================================\n");
        printf("請輸入題號代碼 (0-15): ");

        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n');
            printf("輸入錯誤，請重新輸入整數。\n");
            continue;
        }

        printf("\n----------------------------------------------\n");
        switch (choice)
        {
        case 1:  P04(); break;
        case 2:  P05(); break;
        case 3:  P06(); break;
        case 4:  P07(); break;
        case 5:  P08(); break;
        case 6:  P13(); break;
        case 7:  P14(); break;
        case 8:  P19(); break;
        case 9:  P21(); break;
        case 10: P25(); break;
        case 11: P26(); break;
        case 12: P28(); break;
        case 13: P30(); break;
        case 14: P37(); break;
        case 15: HW_6_11(); break;
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