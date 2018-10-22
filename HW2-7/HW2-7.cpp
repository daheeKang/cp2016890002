#include <stdio.h>
int main(){
	//7. 0이 입력될 때까지 계속 정수를 입력 받고, 입력된 모든 숫자들의 총합을 출력하시오.

	int a=1, sum=0;
	while(1)
	{
		printf("정수를 입력하세요 : ");
		scanf_s("%d", &a);
		sum=sum+a;
		if(a==0) break;
	}
	printf("수들의 총 합은 %d\n",sum);

}