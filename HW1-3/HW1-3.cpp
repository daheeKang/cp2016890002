#include <stdio.h>
int main() {

//3. �� ��(������)�� �Է� �޾� ���� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

//----------------------------------------
	
	int a, b, c ;
	printf("���� �� ���� �Է��ϼ���");
	scanf_s("%d %d %d", &a,&b, &c);
	
	int max;

	if (a>b){  // ����, a�� b���� Ŭ ��
		max = a;
		if (a<c) {
			max = c;
		}
	}

		else { //a�� b���� ���� ��

			max=b;
			if (b<c){
				max=c;}
		}
			
		printf("max=%d\n",max);

	

//-----------------------------------
	return 0;
}