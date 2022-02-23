#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h, m, time;
	scanf("%d %d %d", &h, &m, &time);

	//way1
	
	h += time / 60;
	m += time % 60;
	
	if (m >= 60)
	{
		h += 1;
		m -= 60;
	}
	if (h >= 24)
		h -= 24;

	printf("%d %d", h, m);
	

	//way2
	m += time;
	h += m / 60;
	printf("%d %d", h % 24, m % 60);

	return 0;
}