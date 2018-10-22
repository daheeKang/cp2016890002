#include <stdio.h>
int main(){
	//12. for문(while)의 무한 반복과 break 문을 이용하여 0이 입력될 때까지 입력 받은 정수 중 가장 큰 정수를 출력하는 프로그램을 작성하시오.
	int a, max=0;

	while(1){
		printf("정수를 입력하세요. 0을 입력하면 max값 표시 :");
		scanf_s("%d", &a);
		if (a>max) max=a;
		if (a==0) break;
		continue;


	}


	printf ("입력된 정수 중 가장 큰 정수는%d\n", max);
}