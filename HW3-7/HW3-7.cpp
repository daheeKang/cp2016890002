//7. ���� �迭�� ���� ��ȯ�ϴ� �Լ�
#include <stdio.h>
//�Լ��̸� addArray()
// �Է� : �迭
// ��� : �迭 �� ��ҵ��� ��
// �μ�ȿ�� : ����

int addArray(int a[], int length){

	int index = 0;
	int sum =0;
	while(index < length ) 
		sum = a[index++] + sum;

	return sum;
}



int main() {
	int a[4] = {60, 20, 30, 40}; //�迭�� �����ʰ� ���� �������ݴϴ�.
	int length = 4;


	printf("sum is %d\n", addArray(a,length));

		return 0;
}
