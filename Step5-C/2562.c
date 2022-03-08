#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[9];
	
	for (int i = 0; i < 9; i++)
		scanf("%d", &arr[i]);

	int max_num = arr[0];
	int index = 0;
	for (int j = 0; j < 9; j++)
	{
		if (arr[j] > max_num)
		{
			max_num = arr[j];
			index = j;
		}
	}
	printf("%d\n%d", max_num, index + 1);
	return 0;
}