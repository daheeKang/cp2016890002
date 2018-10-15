#include <stdio.h>
int main() {

//3. 세 수(정수형)를 입력 받아 가장 큰 수를 출력하는 프로그램을 작성하시오.

//----------------------------------------
	
	int a, b, c ;
	printf("정수 세 개를 입력하세요");
	scanf_s("%d %d %d", &a,&b, &c);
	
	int max;

	if (a>b){  // 먼저, a가 b보다 클 때
		max = a;
		if (a<c) {
			max = c;
		}
	}

		else { //a가 b보다 작을 때

			max=b;
			if (b<c){
				max=c;}
		}
			
		printf("max=%d\n",max);
	
	

//-----------------------------------
	return 0;
}