#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char id[50];

	scanf("%s", id);
	printf("%s?\?!", id);

	return 0;
}

//??! => ?\?!로 입력해줘야한다.
//visual studio 2019에서는 ??!로 해도 결과가 나오지만
//백준에서는 통과가 안된다.
//c언어 삼중자 ??! => | 를 의미한다.
//이것 때문에 한참 걸렸다ㅠㅠ