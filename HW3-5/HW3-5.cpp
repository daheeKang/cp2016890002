#include<stdio.h>
//5. n���� �������� ȭ�鿡 ����ϴ� �Լ�
int findGugudan(int n){
	int a=1;

	while (a<=9){ 

		printf("%d*%d�� %d\n", n, a, a*n);
		a=a+1;
	}
	return 0;
}

int main(){
	int n;
	printf("����� ���� �Է��ϼ���");
	scanf_s("%d", &n);

	findGugudan(n);

	printf("%d�� �Դϴ�\n", n);
	return 0;
}