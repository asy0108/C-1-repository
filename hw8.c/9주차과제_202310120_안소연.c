#include<stdio.h>
#include<math.h>

double caculate_standard_deviation(double number[], int n)
{
	double sum = 0.0, mean, variance = 0.0;
}
int main(void)
{
	int arr[5];
	int i, sum,m,M;
	double mean;
	printf("5���� �Ǽ��� �Է����ּ���: ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	mean = sum / 5;
	for (i = 0; i < 5; i++)
	{
		m = arr[i] - mean;
		M = m * m;
	}

	double std_deviation = calculate_standard_deviation(5);
	printf("�Է¹��� ������ ǥ��������: %f \n", std_deviation);
	return 0;
}