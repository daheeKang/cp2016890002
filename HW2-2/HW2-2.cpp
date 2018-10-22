#include <stdio.h>
int main() { 
//=================================
//2. 10개의 정수를 입력 받아 그 총합을 출력하는 프로그램을 작성하시오.


int sum=0, i=1;
	while (i<=100) {
		sum=sum+i;
		i++;
	}
	printf("%d\n", sum);

}
