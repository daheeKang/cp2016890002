#include <stdio.h>
//9. �迭�� �ִ밪�� �ε����� ��ȯ�ϴ� �Լ�

int findMaxArrayIndex(int a[], int length){
	int index = 0;
	int b=0;
	int max = 0;
	while(index < length ){
		if(a[index]>max){
			max = a[index];
			b = index;
		}
		index++;
	}
	return b;

}

//�迭�� �ε����� 0���� �����Դϴ�.

int main(){
	int a[8] = {10, 4, 2,1,134, 120, 0, 40}; //�迭�� �����ʰ� ���� �������ݴϴ�.
	int length = 8;

	printf("The max is %d\n", findMaxArrayIndex(a,length));

	return 0;
}