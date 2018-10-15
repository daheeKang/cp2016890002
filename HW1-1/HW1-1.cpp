#include <stdio.h>
int main() {

//1. 두 수(정수)를 입력 받아, 그 중 큰 수를 출력하는 프로그램을 작성하시오.

//--------------------------
	int a, b ;
	printf("정수 두 개를 입력하세요");
	scanf_s("%d %d", &a,&b);
	

	if (a>b){ 
		printf("a=%d\n",a);}
	

	else 
		printf("b=%d\n",b); 
	// a와b가 같을 때도 출력합니다. 
	
	

//-----------------------------------
	return 0;
}