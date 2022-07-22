#include<stdio.h>

int main(void)
{
	float x, y, area;

	printf("»ï°¢ÇüÀÇ ¹Øº¯:");
	scanf("%f", &x);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ");
	scanf("%f", &y);

	area = (x * y) / 2;

	printf("»ï°¢ÇüÀÇ ³ĞÀÌ:%f", area);

	return 0;

}