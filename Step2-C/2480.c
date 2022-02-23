#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b, int c)
{
	int maxNum = 0;
	if (a > b && a > c)
		maxNum = a;
	else if (b > c && b > a)
		maxNum = b;
	else if (c > a && c > b)
		maxNum = c;

	return maxNum;
}

int main()
{
	int num1,num2,num3;
	scanf("%d %d %d", &num1, &num2, &num3);

	// num1==num2==num3 ¿Ã∞≈ æ»µ .§æ§æ
	if (num1 == num2 && num1 == num3 && num2 == num3)
		printf("%d", 10000 + num1 * 1000);
	else if (num1 == num2)
		printf("%d", 1000 + num1 * 100);
	else if (num2 == num3)
		printf("%d", 1000 + num2 * 100);
	else if (num3 == num1)
		printf("%d", 1000 + num3 * 100);
	else
		printf("%d", max(num1, num2, num3) * 100);
	return 0;
}