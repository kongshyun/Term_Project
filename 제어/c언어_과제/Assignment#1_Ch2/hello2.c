#include<stdio.h>

int main(void)
{
	float x, y, area;

	printf("�ﰢ���� �غ�:");
	scanf("%f", &x);

	printf("�ﰢ���� ����");
	scanf("%f", &y);

	area = (x * y) / 2;

	printf("�ﰢ���� ����:%f", area);

	return 0;

}