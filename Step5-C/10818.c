#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int arr;
	int min = 1000000;
	int max = -1000000;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr);

		if (min > arr)
			min = arr;
		if (max < arr)
			max = arr;
	}
	printf("%d %d", min, max);

	return 0;
}