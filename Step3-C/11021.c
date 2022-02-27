#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count;
	scanf("%d", &count);

	int a, b;

	for (int i = 1; i <= count; i++)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}
	return 0;
}