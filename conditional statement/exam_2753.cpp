/*������ ������ 4�� ����̸鼭, 100�� ����� �ƴ� �� �Ǵ� 400�� ����� ���̴�.*/

#include<stdio.h>

int main(){
	int year;
	scanf("%d", &year);
	int ret;
	
	if(year%400==0){
		ret = 1;
	}else if(year % 100==0){
		ret = 0;
	}else if(year % 4 ==0){
		ret = 1;
	}else{
		ret=0;
	}
	printf("%d", ret);
	
	return 0;
}

