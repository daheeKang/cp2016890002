#include <stdio.h>
int main(){
	//10. �Ҽ�(prime-number) �˻�� ����ϰ� ����ڰ� �Է��� ���� �μ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int a, n;
	printf("������ �Է��ϼ��� :");
	scanf_s("%d", &a);

	for(n=1; n<=a; n=n+1){
		if (a%n==0) { printf ("%d�� �����%d\n",a,n);
		}
	}

}
