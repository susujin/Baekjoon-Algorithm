#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int a, b;

	while (true)
	{
		scanf("%d %d", &a, &b);

		if (a == 0 && b == 0)
			break;
		else
			printf("%d\n", a + b);
	}
	return 0;
}