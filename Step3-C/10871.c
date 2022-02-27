#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	int count,min;
	scanf("%d %d", &count, &min);

	int numArr;
	for (int i = 1; i <= count; i++)
	{
		scanf("%d", &numArr);

		if (min > numArr)
		{
			printf("%d ", numArr);
		}
	}
	return 0;
}