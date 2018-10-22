#include <stdio.h>
int main(){
	//8. 1부터 9사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 출력하는 프로그램을 작성하시오.(5이면 5단을 출력)
	int a, n=1;
	printf("구구단 :");
	scanf_s("%d", &a);

	while (n<=9){ 

		printf("%d*%d은 %d\n", a, n, a*n);
		n=n+1;
	}
}

