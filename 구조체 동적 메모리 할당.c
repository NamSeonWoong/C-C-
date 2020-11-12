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
		printf("%d�� å: %s\n",(a+num)->number,(a+num)->title);
	}
}

int main (void)
{
	struct Book *p;
	p=(struct Book *)malloc(2*sizeof(struct Book));
	
	if(p== NULL){
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�. \n");
		exit(1);
	}
	
	p->number=1;
	strcpy(p->title,"C���");
	
	(p+1)->number=2;
	strcpy((p+1)->title,"�˰���");
	
	showBook(p,2);
	free(p);
	return 0;
}
