#include <stdio.h>
int main(){
	//22. ����ڰ� 0�� �Է��� ������ ���� ���ڸ� �Է¹޾�, �Է¹��� ������ �ִ밪�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	int a, max=0;

	while(1){
		printf("������ �Է��ϼ��� 0�� ������ ���� ū ���� ǥ�õ˴ϴ� :");
		scanf_s("%d", &a);
		if (a>max) max=a;
		if (a==0) break;
		continue;
	}


	printf ("�Է¹��� �� �� ���� ū ������%d\n", max);
}