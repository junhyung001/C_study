#include<stdio.h>

/*(1 ≤ A, B, C ≤ 10^12) 이기 때문에
int의 범위가 아닌 long long int를 사용해야 10의 12승을 표현가능하다. */ 

int main(){
	long long int a, b, c;
	
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld", a+b+c);
}
