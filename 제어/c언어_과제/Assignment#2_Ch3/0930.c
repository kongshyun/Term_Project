//19100054 김시현

#include<stdio.h>
#define AREA 3.3058 //1평의 평방미터 값을 기호상수로 정의한다.


int main(void) {

	double x, y;//실수형으로 변수를 정의했다.
	//x는 평수이고, y는 평방미터이다.

	printf("평을 입력하세요:");
	scanf_s("%lf", &x);

	y = x * AREA;

	printf("%lf평방미터입니다.", y);

}