#include <stdio.h>
int main(){
	//4. 1부터 100사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오.(for문 사용)
	int count, sum;
	for( count=1, sum=0; count<=100; count=count+1){
		if (count%3==0) sum=sum+count;
	}

		printf("sum is%d\n", sum);
}
