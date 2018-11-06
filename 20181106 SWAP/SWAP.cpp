#include <stdio.h>

void swap(int* ptr1, int*ptr2){      //2번

	int temp;	//3번
	temp = *ptr1;	//4번
	*ptr1= *ptr2;	//왼쪽 저장장소 오른쪽 값	5번
	*ptr2 =temp;

}	//7번

int main(){
	int a=10 , b=20;	//여기가 9번(함수로 만드느라 줄번호 이상해짐 ㅠㅠ 새필기가 여기)
	//swap: 변수 a, b의 값을 바꾼다.
	
	swap(&a, &b);	//12번
	printf("a=%d, b=%d\n", a, b);


		return 0;
}