#include<stdio.h>

void Binary(int num)
{
	if (num > 1)
	{
		Binary(num / 2);
	}
	printf("%d", num % 2);
}

int main(void)
{
	int num;
	printf("������ �Է�: ");
	scanf_s("%d", &num);
	printf("%d", Binary(num));
	return 0;
}