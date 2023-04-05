#include<stdio.h>
#include<limits.h>
int main(){
	int n[SHRT_MAX], m[SHRT_MAX];
	
	for(int i=0; i<SHRT_MAX; i++){
		scanf("%d %d", &n[i], &m[i]);
		if(n[i] == 0 && m[i] == 0){
			break;
		}
	}
	for(int j=0; j<SHRT_MAX; j++){
		if(n[j]==0 && m[j]==0){
			break;
		}
		printf("%d\n", n[j]+m[j]);
	}
		
}
