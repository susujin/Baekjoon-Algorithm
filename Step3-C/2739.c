#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int dan;
	scanf("%d", &dan);

	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
	return 0;
}