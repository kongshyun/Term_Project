//19100054 �����

#include<stdio.h>
#define AREA 3.3058 //1���� ������ ���� ��ȣ����� �����Ѵ�.


int main(void) {

	double x, y;//�Ǽ������� ������ �����ߴ�.
	//x�� ����̰�, y�� �������̴�.

	printf("���� �Է��ϼ���:");
	scanf_s("%lf", &x);

	y = x * AREA;

	printf("%lf�������Դϴ�.", y);

}