#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);


	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}