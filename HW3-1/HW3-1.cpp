#include<stdio.h>
//1. �� ���� ���̿� ��� ������(�� ���� ����)�� ������� ȭ�鿡 ����ϴ� �Լ�
//�Լ� printNumber()
// �Է� : �� ����
// ��� : ����
// �μ�ȿ�� : ����

void printNumber(int a, int b){
	int count = a;
	while(count<=b){
		printf("%d\n", count++);
	}

	printf("end of program\n");
}

int main(){

	int a, b;	
	printf("�� ������ �Է��ϼ���");
	scanf_s("%d %d", &a ,&b);
	printNumber(a,b);

	return 0;

}


