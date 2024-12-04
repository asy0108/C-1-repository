#include<stdio.h>


typedef struct city
{
	char name[50];
	char country[50];
	int population;
}City;


int main(void)
{
	City arr[3];
	int i;
	printf("input three cities:\n");
	for (i = 0; i < 3; i++)
	{
		printf("name> "); scanf("%s", arr[i].name);
		printf("country> "); scanf("%s", arr[i].country);
		printf("population> "); scanf("%d", &arr[i].population);
	}

	printf("printing the three cities: \n");
	for (i = 0; i < 3; i++) {
		printf("%d.%s in %s with a population of %d people\n", i + 1, arr[i].name, arr[i].country, arr[i].population);
	}


	return 0;
}