#include <stdio.h>
int main(){
	//6. 어떤 양의 정수(n)를 입력 받아(만약 0이나 음의 정수를 입력하면, 에러 메시지를 띄운 뒤, 다시 입력하도록 처리), 그 수의 2n을 구하는 프로그램을 작성하시오
	int n;


	while(1){
		printf("정수를 입력하시오:");		
		scanf_s("%d", &n);
		if (n<=0) { printf("양의 정수인지 확인해 주세요\n");
		continue;
		if (n>0) break;
		};


		printf("두배를하면 %d\n ", 2*n);
	}
}