#include<stdio.h>

int main(void)
{
	int i = 1;
	int num = 0;
	int r = 0;
	printf("���� ������ �Է����ּ���: ");
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
		printf("�Ҽ��Դϴ�.\n");
	}
	else
	{
		printf("�Ҽ��� �ƴմϴ�.\n");
	}
	return 0;
}

