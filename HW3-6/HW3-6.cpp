#include<stdio.h>
//6. ������ ¦���� �� �Ҽ��� ������ ǥ���Ͽ� ȭ�鿡 ����ϴ� �Լ�


int isSosu(int a){
	int n;
	for (n=2; n<a; n=n+1){
		if (a%n==0) return -1;}
	return 1;
}

int main(){
int a;
	printf("¦���� �Է��ϼ���");
	scanf_s("%d", &a);
	int n, m;
	for(n=2; n<a; n=n+1){
		m=a-n;
		if (isSosu(n)==1 && isSosu(m)==1){
			printf("%d=%d+%d\n", a, n, m);
			break;
		}
	}
	return 0;
}