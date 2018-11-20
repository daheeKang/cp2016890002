#include <stdio.h>
//+) 조교님은 418에 계심


//#*#*#*#*#*#*선택정렬*#*#*#*#*#*#

/////////////////////////////////////////////////////////////////////////////
////////////다음시간에 이부분들 퀴즈나오니깐 유심해서 보기///////////////////
/////////////////////////////////////////////////////////////////////////////

void printArray (int* arr, int len){
	for(int index=0; index<len; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
}

//////////////다음시간에 퀴즈 ! //////////////////

//함수 : findMinIndex()
//입력 : 배열(배열이름, 배열길이)
//출력 : 최소값의 인덱스

int findMinIndex(int* arr, int length){
	int minIndex=0;

	for (int count=1; count<length; count++){
		if (arr[minIndex] > arr[count]) minIndex=count;
	}
	return minIndex;
}


//함수 : swapElement()
//입력 : 배열, 두 개의 인덱스
//출력 : 없음
//부수효과 : 배열의 두 인덱스 element가 바뀐다.
void swapElement(int* arr, int i, int j ){
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}




//함수 : findMin()
//입력 : 배열(배열이름, 배열길이)
//출력 : 배열 최소값
int findMin(int* arr, int length){
	int min=arr[0];
	for (int count=1; count<length; count++){
		if (min > arr[count])
			min = arr[count];
	}
	return min;
}

/////////////////////////집에서 해야함 !!!!!!!! 숙제 !!!!!!!!!!//////////////////
//함수 : selectSort()
//입력 : 배열
//출력 : 없음
//부수효과 : 배열이 정렬됨
void selectSort(int* arr, int length){ //find min에 변수 하나 더 넣어야함. start 포인트가 다르므로. 
	int i=0, j;
	int min=arr[i];
	int minIndex=i;

	for( i=0; i<length-1; i++){
		for (j=i+1; j<length; j++){
			if (arr[j]<min) {
				min = arr[j];
				minIndex=j;
			}
		}
		if(i!=minIndex)swapElement(arr, j, i);

	}
	printArray(arr,5);
}



int main() {

	int a[] = {30, 35, 27, 15, 40 };	
	selectSort(a,5);
	return 0;
	/*printf("minium value of the array is %d\n", findMin(a, 5));
	printf("The index of minium value of the array is %d\n", findMinIndex(a, 5));
	swapElement(a, 0, 3);*/
}
