#include<stdio.h>

int main(){
	int a,b;
	
	scanf("%d %d", &a, &b);
	// a = 472  b = 385
	printf("%d\n", a*(b%10));			//a * (385 % 10 = 38....5) = a*5;  		 
	printf("%d\n", a*(b % 100 / 10)); 	//a * (385 % 100 = 85 / 10 = 8) a*8
	printf("%d\n", a*(b/100));			//a * (385 / 100 = 3) a*3
	printf("%d", a*b);					//a*b
	return 0;
}
