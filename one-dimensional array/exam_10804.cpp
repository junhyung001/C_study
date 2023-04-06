#include<stdio.h>
#include<limits.h>

int main(){
	int num[SHRT_MAX];
	int i, m, h, j;
	int count = 0;
	
	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%d", &num[i]);
	}
	
	scanf("%d", &h);
	
	for(j=0; j<m; j++){
		if(num[j] == h){
			count += 1;
		}
	}
	printf("%d", count);
}
