
//���ý��۵����ΰ��а� 19100054 �����
//Assignment#3 _2��
#include<stdio.h>

int main(void)
{
	double x, y;

	printf("x�� ���� �Է��Ͻÿ�:");
	scanf_s("%lf", &x);

	if (x <= 0)
	{
		y = x * x - 9 * x + 2;
		printf("f(x)�� ����:%lf", y);

	}
	else if (x > 0) {
		y = 7 * x + 2;
		printf("f(x)�� ����:%lf", y);

	}
	return 0;
}