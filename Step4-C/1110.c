#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int num;
	scanf("%d", &num);

	int cmp_num = num;
	int count = 0;

	while (true)
	{
		int ten = cmp_num / 10;
		int one = cmp_num % 10;
		int result = ten + one;

		cmp_num = one * 10 + result % 10;

		count += 1;
		if (num == cmp_num)
			break;
	}

	printf("%d", count);

	return 0;
}