#include<stdio.h>

int main(){
	double a, b;
	
	scanf("%lf %lf", &a, &b);  //double형은 %lf로 입력받는다.
	/*
     기본적으로 lf 출력은 소수점 6자리까지 출력한다.
     그렇기 때문에 소수점 자리수를 늘려주어야 한다.
     오차범위가 10^-9 이하여야 하므로 여유있게 %.10lf 이상으로 해주자.
    */
	printf("%.13lf", a/b); //%.nnlf 형식으로 출력을 해주어야 출력이 된다 
	return 0;
}
