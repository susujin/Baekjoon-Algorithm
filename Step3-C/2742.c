#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	int a, b;

	for (int i = num; i >= 1; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}