#include<stdio.h>
//1. 두 정수 사이에 모든 정수들(두 정수 포함)를 순서대로 화면에 출력하는 함수
//함수 printNumber()
// 입력 : 두 정수
// 출력 : 없음
// 부수효과 : 없음

void printNumber(int a, int b){
	int count = a;
	while(count<=b){
		printf("%d\n", count++);
	}

	printf("end of program\n");
}

int main(){

	int a, b;	
	printf("두 정수를 입력하세요");
	scanf_s("%d %d", &a ,&b);
	printNumber(a,b);

	return 0;

}


