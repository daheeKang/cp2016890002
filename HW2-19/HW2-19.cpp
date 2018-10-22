#include <stdio.h>
int main(){
	//19. 사용자로부터 한 숫자를 입력받아, 입력받은 숫자가 소수인지 아닌지를 검사하는 프로그램을 작성하시오.

	int a, n, p=1;

	printf("소수 판정할 정수를 입력하세요 :");
	scanf_s("%d", &a);

	for(n=2; n<a; n=n+1){
		if ( a%n==0){
			p=0;
			break;
		}

	}
	if(p==1) printf("그 수는 소수\n");
	else printf("그 수는 소수가 아님\n");
}
