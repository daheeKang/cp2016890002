#include<stdio.h>
//2. 두 정수 사이의 모든 정수들을 더해 그 결과를 반환하는 함수

int sumAll(int a, int b){
	int count = a;
	int sum = 0;

	while(count<=b){
		sum = sum+count;
		count++;
	}
	return (sum);
}

int main(){
	int a, b; 
	printf("두 정수를 입력하세요");
	scanf_s("%d %d", &a ,&b);
	sumAll(a,b);

	printf("The sum is %d\n", sumAll(a,b));
	return 0;
}