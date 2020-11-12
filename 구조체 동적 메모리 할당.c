#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
	int number;
	char title[100];
};

void showBook(struct Book *a,int n)
{
	int num;
	for (num=0;num<n;num++)
	{
		printf("%d번 책: %s\n",(a+num)->number,(a+num)->title);
	}
}

int main (void)
{
	struct Book *p;
	p=(struct Book *)malloc(2*sizeof(struct Book));
	
	if(p== NULL){
		printf("동적 메모리 할당에 실패했습니다. \n");
		exit(1);
	}
	
	p->number=1;
	strcpy(p->title,"C언어");
	
	(p+1)->number=2;
	strcpy((p+1)->title,"알고리즘");
	
	showBook(p,2);
	free(p);
	return 0;
}
