#include <stdio.h>
//+) �������� 418�� ���


//#*#*#*#*#*#*��������*#*#*#*#*#*#

/////////////////////////////////////////////////////////////////////////////
////////////�����ð��� �̺κе� ������ϱ� �����ؼ� ����///////////////////
/////////////////////////////////////////////////////////////////////////////

void printArray (int* arr, int len){
	for(int index=0; index<len; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
}

//////////////�����ð��� ���� ! //////////////////

//�Լ� : findMinIndex()
//�Է� : �迭(�迭�̸�, �迭����)
//��� : �ּҰ��� �ε���

int findMinIndex(int* arr, int length){
	int minIndex=0;

		for (int count=1; count<length; count++){
		if (arr[minIndex] > arr[count]) minIndex=count;
	}
	return minIndex;
}


//�Լ� : swapElement()
//�Է� : �迭, �� ���� �ε���
//��� : ����
//�μ�ȿ�� : �迭�� �� �ε��� element�� �ٲ��.
void swapElement(int* arr, int i, int j ){
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}




//�Լ� : findMin()
//�Է� : �迭(�迭�̸�, �迭����)
//��� : �迭 �ּҰ�
int findMin(int* arr, int length){
	int min=arr[0];
	for (int count=1; count<length; count++){
		if (min > arr[count])
			min = arr[count];
	}
	return min;
}

/////////////////////////������ �ؾ��� !!!!!!!! ���� !!!!!!!!!!//////////////////
//�Լ� : selectSort()
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : �迭�� ���ĵ�
void selectSort(int* arr, int length){ //find min�� ���� �ϳ� �� �־����. start ����Ʈ�� �ٸ��Ƿ�. 
	int min=arr[0];
	for (int count=1; count<length; count++){
		if (min > arr[count]) 
			void swapElement(int* arr, int i, int j );
			min = arr[count];
	}
}


int main() {

	int a[] = {30, 35, 27, 15, 40 };	

	printf("minium value of the array is %d\n", findMin(a, 5));
	printf("The index of minium value of the array is %d\n", findMinIndex(a, 5));
	swapElement(a, 0, 3);
	printArray(a,5);
}
