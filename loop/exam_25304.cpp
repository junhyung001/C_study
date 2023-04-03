#include<stdio.h>

int main(){
	int max, n;
	int a, b, i;
	int sum=0;
	
	scanf("%d\n", &max);
	scanf("%d\n", &n);
	
	for(i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		sum += a*b;
	}
	if(max==sum){
		printf("Yes");
	}else{
		printf("No");
	}
}
