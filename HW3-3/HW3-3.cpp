#include<stdio.h>
//3. 두 정수 사이의 정수들 중 소수를 화면에 출력하는 함수

void findSosu(int a, int b){

	int n, m;

	for(n=a; n<=b; n=n+1){
		for(m=2; m<n; m=m+1)
			if (n%m==0) break;

		if(m==n)  printf("%d\n",n);
	}

printf("end\n");
}

int main(){

	int a, b;	
	printf("두 정수를 입력하세요");
	scanf_s("%d %d", &a ,&b);

	findSosu(a,b);
	return 0;

}