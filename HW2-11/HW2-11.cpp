#include <stdio.h>
int main(){
	//11. 위의 문제를 0을 입력하기 전까지는 계속 수행(인수 출력)하도록 수정하시오.

	int a, n;
	while(1){
		printf("정수를 입력하세요 :");
		scanf_s("%d", &a);
		if (a==0) break;

		for(n=1; n<=a; n=n+1){
			if (a%n==0) { printf ("%d의 약수는%d\n",a,n);
			}
		}
		continue;
	
	}

}