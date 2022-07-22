//기계시스템디자인공학과 19100054 김시현
//Assignment#3 _1번
#include<stdio.h>

int main(void)
{
	int time, age;

	printf("현재 시간과 나이를 입력하시오(시간, 나이):");
	scanf_s("%d %d", &time, &age);

	if (time < 17) {
		if ((age >= 13) && (age < 65)) printf("요금은 34000입니다.");
		else printf(("요금은 25000입니다."));
	}
	else
		printf("요금은 10000입니다.");

	return 0;
}

