#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int a,b,i,x,y;
	printf("설정할 배열의 크기 설정을 위해 숫자 두개를 입력하세요\n");
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
