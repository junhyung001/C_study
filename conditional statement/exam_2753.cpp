/*윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.*/

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

