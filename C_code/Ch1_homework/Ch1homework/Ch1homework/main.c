#include<stdio.h>
#include<stdlib.h>

int SW = 0;
int main() 
{
	printf("¿é¤JÃD¸¹¡G");

	scanf("%d",&SW);
    switch (SW) 
    {
    case 1:
        HW_2_21();
        break;
    case 2:
        HW_2_23();
        break;
    case 3:
        HW_2_24();
        break;
    case 4:
        HW_2_25();
        break;
    case 5:
        HW_2_26();
        break;
    case 6:
        HW_2_27();
        break;
    case 7:
        HW_2_31();
        break;
    case 8:
        HW_2_32();
        break;
    case 9:
        HW_2_33();
        break;
    default:
        break;
    }
}