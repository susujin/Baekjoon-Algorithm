#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		char ox[81];
		scanf("%s", ox);

		int sum = 0;
		int add_num = 0;

		for (int j = 0; j < strlen(ox); j++)
		{
			if (ox[j] == 'O')
			{
				add_num += 1;
				sum += add_num;
			}
			else
				add_num = 0;
		}
		printf("%d\n", sum);
	}
	return 0;
}