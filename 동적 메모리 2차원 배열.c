#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int a,b,i,x,y;
	printf("������ �迭�� ũ�� ������ ���� ���� �ΰ��� �Է��ϼ���\n");
	scanf("%d %d",&a,&b);
	int ** pptr = (int**)malloc(sizeof(int*)*a);
	
	for (i=0;i<a;i++)
	{
		*(pptr+i) = (int*)malloc(sizeof(int)*b);
	}
	
	for (y=0;y<a;y++)
	{
		for(x=0;x<b;x++)
		{
			*(*(pptr+y)+x) = b*y+x;
		}
	}
	
	for (y=0;y<a;y++)
	{
		for(x=0;x<b;x++)
		{
			printf("%10d",*(*(pptr+y)+x));
		}
		printf("\n");
	}
	
	for (y=0;y<a;y++)
	{
		free(*(pptr+y));
	}
	return 0;

}
