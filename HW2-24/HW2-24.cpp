#include <stdio.h>
int main(){
	//24.사용자에게 라인 수를 입력받아서 그 줄 수 만큼 별표 삼각형을 만드시오.

	int a, b, n;

	printf("줄 수를 입력하세요 :");
	scanf_s("%d", &n);


	for ( a=1; a<=n; a=a+1){
		for(b=0; b<=(2*a-2); b=b+1){
			printf("*");
		}
		printf("\n");
	}
}