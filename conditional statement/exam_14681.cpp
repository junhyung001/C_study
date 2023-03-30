/* 
1사분면 - x 양수 y 양수 
2사분면 - x 음수 y 양수 
3사분면 - x 음수 y 음수 
4사분면 - x 양수 y 음수 
*/
#include<stdio.h>

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	
	if (x>0 && y>0){
		printf("1");		// x가 양수 y도 양수 
	}else if(x<0 && y>0){
		printf("2");		// x가 음수 y는 양수 
	}else if(x<0 && y<0){
		printf("3");		// x가 음수 y가 음수  
	}else{
		printf("4");		// x가 양수 y가 음수 
	}
	return 0;
} 
