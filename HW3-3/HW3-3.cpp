#include<stdio.h>
//3. �� ���� ������ ������ �� �Ҽ��� ȭ�鿡 ����ϴ� �Լ�

void findSosu(int a, int b){

	int n, m;

	for(n=a; n<=b; n=n+1){
		for(m=2; m<n; m=m+1)
			if (n%m==0) break;

		if(m==n)  printf("%d\n",n);
	}

printf("end\n");
}

int main(){

	int a, b;	
	printf("�� ������ �Է��ϼ���");
	scanf_s("%d %d", &a ,&b);

	findSosu(a,b);
	return 0;

}