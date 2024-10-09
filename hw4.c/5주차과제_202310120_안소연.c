#include<stdio.h>

int main(void)
{
	int i = 1;
	int num = 0;
	int r = 0;
	printf("양의 정수를 입력해주세요: ");
	scanf_s("%d", &num);

	for (i = 1; i > num; i++);
	{
		if (num % i == 0)
		{
			r++;
		}
			
	}
	if (r == 2)
	{
		printf("소수입니다.\n");
	}
	else
	{
		printf("소수가 아닙니다.\n");
	}
	return 0;
}

