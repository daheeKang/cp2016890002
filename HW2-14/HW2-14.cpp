#include <stdio.h>
int main(){
	//14. 사용자로부터 숫자 하나를 입력받아, 7부터 입력받은 수까지의 모든 정수들의 합을 구하는 프로그램을 작성하시오. 입력받은 숫자가 7보다 작으면 에러 메시지를 출력한다.
	int a, n, sum;
	
	printf("정수를 입력하세요 :");
	scanf_s("%d", &a);

	for(sum=0, n=7; n<=a; n=n+1){
		sum=n+sum;
		if (a<7) break;
	}
	
	if (a<7) printf("에러입니다\n");
	else printf("7부터의 합은 %d\n", sum);
}
