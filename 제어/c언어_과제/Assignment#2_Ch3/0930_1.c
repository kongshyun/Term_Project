//19100054 �����

#include<stdio.h>

int main(void) {

	double m, V, E;

	printf("����(kg):");
	scanf_s("%lf", &m);
	printf("�ӵ�(m/s):");
	scanf_s("%lf", &V);

	E = 0.5 * m * V * V;

	printf("�������(J):%lf",E);

}