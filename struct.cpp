#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
	int number;
	char name[10];
	double grade;
};

int main (void) {
	struct student s;
	s.number= 20150001;
	strcpy(s.name, "������");
	s.grade=3.0;
	printf("�й� : %d\n",s.number);
	printf("�̸� : %d\n",s.name);
	printf("���� : %.1f\n",s.grade);
	return 0;
}