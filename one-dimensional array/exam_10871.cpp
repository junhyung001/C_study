#include<stdio.h>
#include<limits.h>

int main(){
	int fnum, snum, i, j;
	int s_arr[SHRT_MAX];
	int c_arr[SHRT_MAX];
	
	scanf("%d %d", &fnum, &snum);
	
	for(i=0; i<fnum; i++){
		scanf("%d", &s_arr[i]);
	}
	for(j=0; j<fnum; j++){
		if(s_arr[j] < snum){
			printf("%d ", s_arr[j]);
		}
	}
}
