#include <stdio.h>
#include <stdlib.h>

int main (void) {
	char *pc =NULL;
	int i =0;
	pc=(char *)malloc(200*sizeof(char));
	if (pc ==NULL)
	{
		printf("���� �޸� �Ҵ����. \n");
		exit(1); 
	}
	
	for(i=0;i<=150;i++)
	{
		*(pc+i) = 'A'+i;
		
	}
	*(pc+i)=0;
	printf("%s \n",pc);
	free(pc);
	return 0;
} 
