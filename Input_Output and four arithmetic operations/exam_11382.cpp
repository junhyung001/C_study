#include<stdio.h>

/*(1 �� A, B, C �� 10^12) �̱� ������
int�� ������ �ƴ� long long int�� ����ؾ� 10�� 12���� ǥ�������ϴ�. */ 

int main(){
	long long int a, b, c;
	
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld", a+b+c);
}
