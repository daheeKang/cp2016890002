#include <stdio.h>
//10. �迭�� �� �ε��� ���� ��ȯ�ϴ� �Լ�

// ������ ��� �Ŀ� �ٽ��ؾ��մϴ�

int transIndex(int a[], int index1, int index2, int length){
	int n , m;
	int index=0;
	n=a[index1];
	m=a[index2];

	a[index1]=m;
	a[index2]=n;

	int count = 0;
	while(count < length ) { 
		printf("a[%d]=%d\n", count, a[count]); 
		count++;
	}
	return 0;
}


int main(){
	int a[8] = {0,1,2,3,4,5,6,7}; //�迭�� �����ʰ� ���� �������ݴϴ�.
	int length = 8;
	//�ε����� 0���� �����մϴ�.

	int index1, index2;	
	printf("�ε����� ��ȯ�� �� ����� �ε����� �Է��ϼ���"); 
	scanf_s("%d %d", &index1 ,&index2);
	transIndex(a, index1, index2, length);
		return 0;
}
