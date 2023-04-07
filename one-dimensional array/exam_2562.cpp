#include<stdio.h>
#include<limits.h>
#define f_max(x, y) ((x>y) ? (x) : (y))

int main(){
	int snum , i, save;
	int max = 0;
	
	int s_arr[100000];
	
	for(i=0; i<9; i++){
		scanf("%d", &s_arr[i]);
		if(max<s_arr[i]){
			max = s_arr[i];
			save = i;
		}
	}
	printf("%d %d", max, save+1);
}

