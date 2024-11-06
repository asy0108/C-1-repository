#include<stdio.h>

int main(void)
{
	int arr[5];
	int i;
	printf("다섯개의 정수 입력: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
	printf("even numbers:");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
   }
	printf("\n");
	printf("odd numbers:");
	for (i = 0; i < 5; i++)
	{
		if (arr[i] % 2 != 0)
		{
			printf("%d ", arr[i]);
		}
	}

	
	return 0;
}