# include <stdio.h>

int main(void){
	int num1, num2; 
	int num3;
	printf("����1�� �Է��ϼ���\t");
	scanf("%d", &num1); 
	printf("����2�� �Է��ϼ���\t");
	scanf("%d", &num2);
	
	printf("\n");
	printf("����� �����������?? \n");
	printf("1:����,2:����,3:����,4:������ \n");
	scanf("%d", &num3);
	if(num3==1){
		printf("������:%d",num1+num2);
	}
	else if(num3==2){
		printf("������:%d",num1-num2);
	}
	else if(num3==3){
		printf("������:%d",num1*num2);
	}
	else if(num3==4){
		printf("��������:%d",num1/num2);
	}
	else {
		printf("�߸��� ���Դϴ�.");
	}
	return 0; 
}

