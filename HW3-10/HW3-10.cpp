#include <stdio.h>
//10. �迭�� �� �ε��� ���� ��ȯ�ϴ� �Լ�

// ������ ���� �� �ۼ��� ����Դϴ�.

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


//������ ��� �� �ۼ����� ����Դϴ�.

//void swap(int* ptr1, int* ptr2, int a[], int length){     
//	int temp;	
//	
//	temp = *ptr1;	
//	*ptr1= *ptr2;	
//	*ptr2 =temp;
//
//	int count = 0;
//
//	while(count < length ) { 
//		printf("a[%d]=%d\n", count, a[count]); 
//		count++;
//	}
//
//}	
////
//int main(){
//	int a[5] = {10, 20, 30, 40, 50};	
//	int* ptr;	
//	ptr = a;
//	int index1, index2;	
//	printf("��ȯ�� �� ����� �ε����� �Է��ϼ���"); 
//	scanf_s("%d %d", &index1 ,&index2);
//
//	swap( &index1,&index2, a, 5);	
//
//	printf("a[0] = %d\n", ptr[0]);
//	printf("a[1] = %d\n", ptr[1]);
//	printf("a[2] = %d\n", ptr[2]);
//	printf("a[3] = %d\n", ptr[3]);
//	printf("a[4] = %d\n", ptr[4]);
//	
//
//	return 0;
//}