#include<stdio.h>
//2. �� ���� ������ ��� �������� ���� �� ����� ��ȯ�ϴ� �Լ�

int sumAll(int a, int b){
	int count = a;
	int sum = 0;

	while(count<=b){
		sum = sum+count;
		count++;
	}
	return (sum);
}

int main(){
	int a, b; 
	printf("�� ������ �Է��ϼ���");
	scanf_s("%d %d", &a ,&b);
	sumAll(a,b);

	printf("The sum is %d\n", sumAll(a,b));
	return 0;
}