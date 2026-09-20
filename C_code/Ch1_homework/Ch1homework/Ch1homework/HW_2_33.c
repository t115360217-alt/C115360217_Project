#include<stdio.h>
#include<stdlib.h>

void HW_2_33(void)
{
	float a;
	float b;
	float c;
	float d;
	float e;
	printf("請輸入一整天的總里程數：");
	scanf("%f", &a);
	printf("請輸入汽油一公升多少錢：");
	scanf("%f", &b);
	printf("請輸入平均一公升能行駛多少公里：");
	scanf("%f", &c);
	printf("請輸入一天的停車費：");
	scanf("%f", &d);
	printf("請輸入一天的通行費(過路費)：");
	scanf("%f", &e);
	printf("使用者一天下來開車去工作的花費是 %.1f",a/c*b+d+e);
	return 0;
}