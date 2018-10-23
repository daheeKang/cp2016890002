#include <stdio.h>
int main(){

int m,n,r,g;

printf("두 정수를 입력하세요 :");
	scanf_s("%d %d", &m, &n);
	g= m*n;
	for (; r=m%n; n=r, m=n){
	/*if(r==0) break;*/
	}
	printf("최대공약수%d 최소공배수%d\n", n, g/n);
}

int main ()

{

int num;

int value1 = 0, value2 = 1;

int printValue = 0;

int cnt = 0;




printf("몇 항까지 출력하려하는가(0이상의 수) : ");

scanf("%d", &num);




while(cnt != num){

printf("%d ", printValue); // 출력될 값

printValue = value2; //두번째 value 값을 출력하기 위해

value2 += value1; // 두번째 값에 첫번째 값을 더한다

value1 = printValue; // 첫번째 값에 두번째 값을 대입한다.

cnt++;

}




return 0;

}
