#include <stdio.h>

void swap(int* ptr1, int*ptr2){      //2��

	int temp;	//3��
	temp = *ptr1;	//4��
	*ptr1= *ptr2;	//���� ������� ������ ��	5��
	*ptr2 =temp;

}	//7��

int main(){
	int a=10 , b=20;	//���Ⱑ 9��(�Լ��� ������� �ٹ�ȣ �̻����� �Ф� ���ʱⰡ ����)
	//swap: ���� a, b�� ���� �ٲ۴�.
	
	swap(&a, &b);	//12��
	printf("a=%d, b=%d\n", a, b);


		return 0;
}