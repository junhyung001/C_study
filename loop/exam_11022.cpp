#include<stdio.h>
#include<limits.h>

int main(){
	int a[SHRT_MAX], b[SHRT_MAX];
	int t=0, i, j;
	
	
	scanf("%d", &t);
	int sum[t];
	
	for(i=0; i<t; i++){
		scanf("%d %d", &a[i], &b[i]);
		sum[i] = a[i]+b[i];
	}
	
	for(j=0; j<t; j++){
		printf("Case #%d: %d + %d% = %d\n", j+1, a[j], b[j], sum[j]);
	}
}
