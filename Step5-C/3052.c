#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	int arr[10];
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] %= 42;
	}

	for (int j = 0; j < 10; j++)
	{
		int over_count = 0;
		for (int k = j + 1; k < 10; k++)
		{
			if (arr[j] == arr[k]) //�ߺ��� ���� �������
			{
				over_count += 1;
			}
		}
		if (over_count == 0) //�ߺ��� ���� �������
			count += 1;
	}
	printf("%d", count);
	return 0;
}