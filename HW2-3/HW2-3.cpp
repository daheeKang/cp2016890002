#include <stdio.h>
int main() {
	//3. 1부터 100사이의 숫자(정수) 중에서 3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오.(while문 사용)
	int count=1, sum=0;

	while(count<=100){
		if(count%3==0)  sum = sum+count;

		count++;}
	printf("sum is %d\n",sum);
	return 0;
}
