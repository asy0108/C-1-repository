#include<stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	int len,i;
	printf("���ڿ��� �Է����ּ���:");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	
		for (i = 0; i < len; i++)
		{
			if ('A' <= str[i] && str[i] <= 'Z') {
				str[i] = str[i] + ('a' - 'A');
			}
			else if ('a' <= str[i] && str[i] <= 'z') {
				str[i] = str[i] - ('a' - 'A');
			}
		}
	

	printf("��ȯ�� ���ڿ�:%s", str);
	return 0;
}