//���ý��۵����ΰ��а� 19100054 �����
//Assignment#3 _1��
#include<stdio.h>

int main(void)
{
	int time, age;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�(�ð�, ����):");
	scanf_s("%d %d", &time, &age);

	if (time < 17) {
		if ((age >= 13) && (age < 65)) printf("����� 34000�Դϴ�.");
		else printf(("����� 25000�Դϴ�."));
	}
	else
		printf("����� 10000�Դϴ�.");

	return 0;
}

