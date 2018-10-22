#include <stdio.h>
int main(){
	//22. 사용자가 0을 입력할 때까지 여러 숫자를 입력받아, 입력받은 숫자의 최대값을 출력하는 프로그램을 작성하시오.

	int a, max=0;

	while(1){
		printf("정수를 입력하세요 0을 누르면 가장 큰 수가 표시됩니다 :");
		scanf_s("%d", &a);
		if (a>max) max=a;
		if (a==0) break;
		continue;
	}


	printf ("입력받은 수 중 가장 큰 정수는%d\n", max);
}