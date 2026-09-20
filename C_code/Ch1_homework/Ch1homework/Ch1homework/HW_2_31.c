#include<stdio.h>
#include<stdlib.h>

void HW_2_31(void)
{
	printf("number\tsquare\tcude\n");
	for (int n = 0; n <= 10;n++) 
	{
		printf("%d\t%d\t%d\n",n,n*n,n*n*n );
	}
	return 0;
}