#include <stdio.h>
//10. �迭�� �� �ε��� ���� ��ȯ�ϴ� �Լ�

// ������ ���� �� �ۼ��� ����Դϴ�.

void transIndex(int* a, int i, int j , int length){
	int temp;
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void printArray (int* a, int length){ //�ٲ�� ���� Ȯ���ϱ� ���� ����Ʈ�մϴ�.
	for(int index=0; index<length; index++){
		printf("array[%d] = %d \n", index, a[index]);
	}

}

int main(){
	int a[8] = {0,1,2,3,4,5,6,7}; //�迭�� �����ʰ� ���� �������ݴϴ�.
	int length = 8;
	//�ε����� 0���� �����մϴ�.

	int i, j;	
	printf("�ε����� ��ȯ�� �� ����� �ε����� �Է��ϼ���"); 
	scanf_s("%d %d", &i ,&j);
	transIndex(a, i, j, 8);
	printArray(a,8);
	return 0;


}