# include <stdio.h>

void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main(void) {
	int x,y;
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	printf("\nx=%d \ny=%d\n",x,y);
	return 0;
}
