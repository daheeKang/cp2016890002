#include <stdio.h>
int main(){
	//17. 1부터 100까지의 합을 for loop을 써서 구하는 프로그램을 작성하시오.
	int a, sum=0;
	for(a=1; a<=100; a=a+1){
		sum= sum+a;
	}

	printf("총 합은 %d\n", sum);
}
