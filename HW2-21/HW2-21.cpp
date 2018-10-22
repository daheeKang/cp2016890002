#include <stdio.h>
int main(){
	//21. 사용자로부터 한 숫자를 입력받아, 입력받은 숫자 이하의 소수들의 합을 구하는 프로그램을 작성하시오.


	int a, n,b ;
	int sum=0;

	printf("정수를 입력하세요 :");
	scanf_s("%d", &n);

	for(a=2; a<=n; a=a+1){
		for(b=2; b<=a; b=b+1)
		{
			if(a==b){sum=sum+a;
			}
			else if (a%b==0){
				break;
			}
		}
	}
	printf("%d\n",sum);


}