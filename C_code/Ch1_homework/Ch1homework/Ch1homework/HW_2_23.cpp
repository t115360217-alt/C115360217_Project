#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int NUM1 =0;
	int NUM2 =0;
	int NUM3 =0;
	//int Max;
	//int Min;
	int T;

	printf("請輸入三個整數並用空白鍵隔開：");
	scanf("%d", &NUM1);
	scanf("%d", &NUM2);
	scanf("%d", &NUM3);
	if (NUM1 <= NUM2) 
	{
		T = NUM1;
		NUM1 = NUM2;
		NUM2 = T;
	}
	if (NUM2 <= NUM3)
	{
		T = NUM2;
		NUM2 = NUM3;
		NUM3 = T;
	}
	if (NUM1 <= NUM2)
	{
		T = NUM1;
		NUM1 = NUM2;
		NUM2 = T;
	}

	printf("%d %d %d", NUM1, NUM2, NUM3);

} 