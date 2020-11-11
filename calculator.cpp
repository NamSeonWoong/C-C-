# include <stdio.h>

int main(void){
	int num1, num2; 
	int num3;
	printf("Á¤¼ö1À» ÀÔ·ÂÇÏ¼¼¿ä\t");
	scanf("%d", &num1); 
	printf("Á¤¼ö2¸¦ ÀÔ·ÂÇÏ¼¼¿ä\t");
	scanf("%d", &num2);
	
	printf("\n");
	printf("¾î¶²°ªÀ» º¸°í½ÍÀ¸¼¼¿ä?? \n");
	printf("1:µ¡¼À,2:»¬¼À,3:°ö¼À,4:³ª´°¼À \n");
	scanf("%d", &num3);
	if(num3==1){
		printf("µ¡¼ÀÀº:%d",num1+num2);
	}
	else if(num3==2){
		printf("»¬¼ÀÀº:%d",num1-num2);
	}
	else if(num3==3){
		printf("°ö¼ÀÀº:%d",num1*num2);
	}
	else if(num3==4){
		printf("³ª´°¼ÀÀº:%d",num1/num2);
	}
	else {
		printf("Àß¸øµÈ °ªÀÔ´Ï´Ù.");
	}
	return 0; 
}

