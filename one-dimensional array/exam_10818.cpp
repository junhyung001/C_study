#include<stdio.h>
#include<limits.h>

int main(){
	int snum, i, j;
	
	
	scanf("%d", &snum);
	
	int s_arr[snum];
	
	for(i=0; i<snum; i++){
		scanf("%d", &s_arr[i]);
	}
	int max = s_arr[0];
	int min = s_arr[0];
	for(j=0; j<snum; j++){
		if(s_arr[j] > max){
			max = s_arr[j];
		}else if(s_arr[j] <min){
			min = s_arr[j];
		}
	}
	printf("%d %d", min, max);
}
