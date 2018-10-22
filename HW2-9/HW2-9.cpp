#include <stdio.h>
int main(){
	//9. 위의 문제에서 1부터 9사이 이외의 숫자를 사용자가 잘못 입력할 수도 있으니, 이 경우에 잘못된 숫자라는 것을 알려주는 에러 메시지를 출력하고 다시 숫자를 입력 받도록 처리하시오.(입력의 유효성 검사)
	int a, n=1;

	while (1){ 
		printf("구구단 :");
		scanf_s("%d", &a);
		if (a>9 || a<1 || a==0 ) { 
			printf("1에서 9까지의 정수만 입력해주세요\n");
			continue;
		}
			if (a<10 && a>=1 ) break;
		
	}

		while(n<=9) {
			printf("%d*%d은 %d\n", a, n, a*n);
			n=n+1;
		}

	}


