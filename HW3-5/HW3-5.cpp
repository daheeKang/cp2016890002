#include<stdio.h>
//5. n단의 구구단을 화면에 출력하는 함수
int findGugudan(int n){
	int a=1;

	while (a<=9){ 

		printf("%d*%d은 %d\n", n, a, a*n);
		a=a+1;
	}
	return 0;
}

int main(){
	int n;
	printf("출력할 단을 입력하세요");
	scanf_s("%d", &n);

	findGugudan(n);

	printf("%d단 입니다\n", n);
	return 0;
}