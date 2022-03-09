#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_kk()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int result = a * b * c;

	int arr[10] = { 0, };
	while (result > 0)
	{
		int num = result % 10;
		result /= 10;
		arr[num]+=1;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);

	return 0;
}