#include <stdio.h>
int main(){
	//12. for��(while)�� ���� �ݺ��� break ���� �̿��Ͽ� 0�� �Էµ� ������ �Է� ���� ���� �� ���� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int a, max=0;

	while(1){
		printf("������ �Է��ϼ���. 0�� �Է��ϸ� max�� ǥ�� :");
		scanf_s("%d", &a);
		if (a>max) max=a;
		if (a==0) break;
		continue;


	}


	printf ("�Էµ� ���� �� ���� ū ������%d\n", max);
}