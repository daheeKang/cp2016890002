#include <stdio.h>
int main(){
	//24.����ڿ��� ���� ���� �Է¹޾Ƽ� �� �� �� ��ŭ ��ǥ �ﰢ���� ����ÿ�.

	int a, b, n;

	printf("�� ���� �Է��ϼ��� :");
	scanf_s("%d", &n);


	for ( a=1; a<=n; a=a+1){
		for(b=0; b<=(2*a-2); b=b+1){
			printf("*");
		}
		printf("\n");
	}
}