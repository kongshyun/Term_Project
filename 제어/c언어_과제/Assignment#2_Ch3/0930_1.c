//19100054 김시현

#include<stdio.h>

int main(void) {

	double m, V, E;

	printf("질량(kg):");
	scanf_s("%lf", &m);
	printf("속도(m/s):");
	scanf_s("%lf", &V);

	E = 0.5 * m * V * V;

	printf("운동에너지(J):%lf",E);

}