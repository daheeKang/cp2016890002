#include <stdio.h>
int main() {

//2. 하나의 정수를 입력 받아 이 수가 짝수(even number)인지 홀수(odd number)인지를 출력하는 프로그램을 작성하시오.

//--------------------------
	int a ;
	printf("홀짝을 알려드릴 정수를 입력하세요");
	scanf_s("%d", &a);
	

	if ((a%2)==1){  //2로나눴을때 나머지가 1이면 홀수
		printf("홀수\n");}
	

	else 
		printf("짝수\n"); 

	

//-----------------------------------
	return 0;
}