#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long sum(int *a,int n)
{
	long long hap = 0;
	for (int i = 0; i < n; i++)
		hap += a[i];
	return hap;
}