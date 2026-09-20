#include<stdio.h>
#include<stdlib.h>

void HW_2_23(void)
{
	int NUM1 = 0;
	int NUM2 = 0;
	int NUM3 = 0;
	int T;

	printf("請輸入三個整數並用空格隔開:");
	scanf("%d %d %d", &NUM1, &NUM2, &NUM3);
	if (NUM1 < NUM2)
	{
		T = NUM1;
		NUM1 = NUM2;
		NUM2 = T;
	}
	if (NUM2 < NUM3)
	{
		T = NUM2;
		NUM2 = NUM3;
		NUM3 = T;
	}
	if (NUM1 < NUM2)
	{
		T = NUM1;
		NUM1 = NUM2;
		NUM2 = T;
	}

	printf("Max: %d\nMin: %d ", NUM1, NUM3);
	return 0;
}