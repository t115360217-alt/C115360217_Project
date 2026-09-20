#include<stdio.h>
#include<stdlib.h>

void HW_2_32(void)
{
	float H=0;
	float W=0;
	float BMI=0;
	printf("請按照[身高 體重]格式輸入身高體重(單位是Meter跟Kg)：");
	scanf("%f %f", &H, &W);
	BMI = W / (H * H);
	printf("您的BMI = %.2f", BMI);
	if (BMI < 18.5) 
	{
		printf("(體重過輕)");
	}
	else if(BMI< 24.9)
	{
		printf("(體重正常)");
	}
	else if (BMI < 29.9)
	{
		printf("(體重過重)");
	}
	else
	{
		printf("(體重肥胖)");
	}
	return 0;
}