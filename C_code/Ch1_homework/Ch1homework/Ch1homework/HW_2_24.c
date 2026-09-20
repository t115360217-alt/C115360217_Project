#include<stdio.h>
#include<stdlib.h>

void HW_2_24(void)
{
	int NUM;
	printf("块俱计");
	scanf("%d", &NUM);
	if (NUM % 2 == 0) 
	{
		printf("%d琌案计", NUM);
	}
	else 
	{
		printf("%d琌计", NUM);
	}
	return 0;
}