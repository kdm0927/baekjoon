//백준 28766번. 단어  S와 정수i가 주어졌을 때,S의i번째 글자를 출력하는 프로그램을 작성하시오.

#include <stdio.h>
#include <stdlib.h>

int main() {
	char s[1001];
	int index;
	
	scanf("%s", s);
	scanf("%d", &index);

	printf("%c", s[index - 1]);
	
	return 0;
}