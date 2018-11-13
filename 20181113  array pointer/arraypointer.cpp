#include <stdio.h>

// 181113 배열포인터 2부 시작 ~~~~~~~~~~~~~~~~
// 저번꺼 복습 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`

//printArray()
// 입력 : 배열
// 출력 : 없음
// 부수효과 : 화면에 배열의 값을 출력

//void printArray(int arr[], int len){
void printArray (int* arr, int len){  //위처럼 arr[]로 해도되고 이것처럼 포인터로 두어도 된다. 이렇게 많이 씀
	//앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다. 포인트 변수가 넘어오는 식

	for(int index=0; index<len; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
}

int main() {

	int a[3] = {10, 20, 30};	
	int* ptr;	//배열의 이름만 사용하면 그 배열 첫 요소의 포인터값이 된다.
	

	/////////////////a = ptr; //왜 에러가날까 ?  -> 필기 ! -> 배열의 이름(a)은 값만 가지고 있다. 즉 rvalue이다. 
	// 10 = a[2]; // error : 위와 같은 이유

	printArray(a,3);
	return 0;
}


//필기) 선택정렬과 삽입정렬
