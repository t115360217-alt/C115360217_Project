#include<stdio.h>
#include<stdlib.h>

void HW_2_26(void)
{
	int NUM1 = 0;
	int NUM2 = 0;
	printf("請輸入兩個整數並用空格隔開:");
	scanf("%d %d", &NUM1, &NUM2);
	if (NUM1 % NUM2 == 0) 
	{
		printf("%d是%d的倍數", NUM1, NUM2);
	}
	else 
	{
		printf("%d不是%d的倍數", NUM1, NUM2);
	}
	return 0;
}