#include <stdio.h>
int main(){
	//10. 소수(prime-number) 검사와 흡사하게 사용자가 입력한 수의 인수들을 모두 출력하는 프로그램을 작성하시오.
	int a, n;
	printf("정수를 입력하세요 :");
	scanf_s("%d", &a);

	for(n=1; n<=a; n=n+1){
		if (a%n==0) { printf ("%d의 약수는%d\n",a,n);
		}
	}

}
