#include <stdio.h>
int main(){
	//11. ���� ������ 0�� �Է��ϱ� �������� ��� ����(�μ� ���)�ϵ��� �����Ͻÿ�.

	int a, n;
	while(1){
		printf("������ �Է��ϼ��� :");
		scanf_s("%d", &a);
		if (a==0) break;

		for(n=1; n<=a; n=n+1){
			if (a%n==0) { printf ("%d�� �����%d\n",a,n);
			}
		}
		continue;
	
	}

}