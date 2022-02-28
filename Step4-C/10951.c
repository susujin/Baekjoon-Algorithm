#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF)
		printf("%d\n", a + b);
	return 0;
}

//처음에는 출력초과가 나서 뭐지...
//한참고민하다가 검색해보니 파일의 끝(EOF)을 사용해야함을 알았다.