#include <stdio.h>
//10. 배열의 두 인덱스 값을 교환하는 함수

// 포인터 배우기 전 작성한 답안입니다.

void transIndex(int* a, int i, int j , int length){
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void printArray (int* a, int length){ //바뀌는 것을 확인하기 위해 프린트합니다.
	for(int index=0; index<length; index++){
		printf("array[%d] = %d \n", index, a[index]);
	}

}

int main(){
	int a[8] = {0,1,2,3,4,5,6,7}; //배열을 오른쪽과 같이 지정해줍니다.
	int length = 8;
	//인덱스는 0부터 시작합니다.

	int i, j;	
	printf("인덱스를 교환할 두 요소의 인덱스를 입력하세요"); 
	scanf_s("%d %d", &i ,&j);
	transIndex(a, i, j, 8);
	printArray(a,8);
	return 0;


}