#include<stdio.h>

int main(){
	int a, b, i;
	int t=0;
	
	
	scanf("%d", &t);
	int sum[t];
	
	for(i=0; i<t; i++){
		scanf("%d %d", &a, &b);
		sum[i] = a+b;
	}
	
	for(i=0; i<t; i++){
		printf("%d\n", sum[i]);
	}
}
