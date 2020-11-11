#include <stdio.h>

int main(void) {
	char input[1001];
	gets (input);
	
	int count = 0;
	while (input [count] != NULL)
	{
		count++;
	}
	printf("문자열의 길이는 %d입니다.",count);
	printf("입력 문자열은: %s 입니다.",input);
	return 0;
}
