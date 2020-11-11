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
	strcpy(s.name, "남선웅");
	s.grade=3.0;
	printf("학번 : %d\n",s.number);
	printf("이름 : %d\n",s.name);
	printf("성적 : %.1f\n",s.grade);
	return 0;
}
