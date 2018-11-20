#include <stdio.h>
void printArray (int* arr, int len){
	for(int index=0; index<len; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
}

void swapElement(int* arr, int i, int j ){
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}



int findMin(int* arr, int length){
	int min=arr[0];
	for (int count=1; count<length; count++){
		if (min > arr[count])
			min = arr[count];
	}
	return min;
}




void selectSort(int* arr, int length){ //find min에 변수 하나 더 넣어야함. start 포인트가 다르므로. 
	int i, j;

	for( i=0; i<length-1; i++){
		int min=arr[i];
		int minIndex=i;
		for (j=i+1; j<length; j++){
			if (arr[j]<min) {
				min = arr[j];
				minIndex=j;
			}
		}

		if(i!=minIndex)swapElement(arr, minIndex, i);

	}
	printArray(arr,5);
}


int main() {

	int a[] = {3, 623, 1,24,978};	
	selectSort(a,5);
	return 0;
}