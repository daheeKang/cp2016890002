#include<stdio.h>
//6. 임의의 짝수를 두 소수의 합으로 표현하여 화면에 출력하는 함수


int isSosu(int a){
	int n;
	for (n=2; n<a; n=n+1){
		if (a%n==0) return -1;}
	return 1;
}

int main(){
int a;
	printf("짝수를 입력하세요");
	scanf_s("%d", &a);
	int n, m;
	for(n=2; n<a; n=n+1){
		m=a-n;
		if (isSosu(n)==1 && isSosu(m)==1){
			printf("%d=%d+%d\n", a, n, m);
			break;
		}
	}
	return 0;
}