#include<stdio.h>
//4. 정수 3개 중 제일 작은 정수를 반환하는 함수

int findMin(int a, int b, int c){
	int min=0;
	if (a>=b) { min= b;
	}
	if (a<b)  min=a;

	if(min>c){min=c;}
	return min;

}

int main(){
	int a, b, c; 
		printf("정수 3개를 입력하세요");
	scanf_s("%d %d %d", &a ,&b ,&c);
	findMin(a, b, c);

	printf("The min is %d\n", findMin(a, b, c));
	return 0;
}