#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		int people;
		scanf("%d", &people);

		int score[1001];
		int sum = 0;
		for (int j = 0; j < people; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		}
		float avg = (float)sum / people;

		int count = 0;
		for (int k = 0; k < people; k++)
		{
			if (score[k] > avg)
				count += 1;
		}

		float rate = (float)count / people * 100;
		printf("%.3f%%\n", rate);
		
	}
	return 0;
}