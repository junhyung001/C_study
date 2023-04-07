#include<stdio.h>

#define f_max(x, y) ((x>y) ? (x) : (y))
#define f_min(x, y) ((x<y) ? (x) : (y))

int main(){
	int snum,i;
	int max = 0;
	long long int min = 1000000;
	
	scanf("%d", &snum);
	int s_arr[snum];
	
	for(i=0; i<snum; i++){
		scanf("%d", &s_arr[i]);
		max = f_max(max, s_arr[i]);
		min = f_min(min, s_arr[i]);
	}
	printf("%ld %d", min, max);
}

/*
성공 코드 
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
*/
