
//기계시스템디자인공학과 19100054 김시현
//Assignment#3 _2번
#include<stdio.h>

int main(void)
{
	double x, y;

	printf("x의 값을 입력하시오:");
	scanf_s("%lf", &x);

	if (x <= 0)
	{
		y = x * x - 9 * x + 2;
		printf("f(x)의 값은:%lf", y);

	}
	else if (x > 0) {
		y = 7 * x + 2;
		printf("f(x)의 값은:%lf", y);

	}
	return 0;
}