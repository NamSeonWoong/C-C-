#include <stdio.h>

int main(void) {
	char input[1001];
	gets (input);
	
	int count = 0;
	while (input [count] != NULL)
	{
		count++;
	}
	printf("���ڿ��� ���̴� %d�Դϴ�.",count);
	printf("�Է� ���ڿ���: %s �Դϴ�.",input);
	return 0;
}
