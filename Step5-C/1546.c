#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_bd()
{
	int subject_num;
	scanf("%d", &subject_num);

	int arr[1000];
	for (int i = 0; i < subject_num; i++)
		scanf("%d", &arr[i]);

	int max_num = 0;
	for (int i = 0; i < subject_num; i++)
	{
		if (max_num < arr[i])
			max_num = arr[i];
	}
	
	float avg = 0;
	for (int i = 0; i < subject_num; i++)
	{
		avg += (float)arr[i] / max_num * 100;
	}
	avg /= subject_num;

	printf("%f", avg);
	return 0;
}