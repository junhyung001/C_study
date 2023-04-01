#include<stdio.h>

int main(){
	int h, m;
	
	scanf("%d %d", &h, &m);
	m-=45;
	// 45분 일찍 알림이 울린다 했으니 입렵받은 분에 45분을 뺀다. 
	
	if(m<0){
		// m<0이라면  60을 더해 m 예외처리 
		m+=60;
		h-=1;
		 
		
		//if문으로 00시 예외처리	
		if(h<0){
			h=23;
		}
	}
	printf("%d %d", h, m);
	
	return 0;
}
