#include <stdio.h>
int main() {

//4. ����(����)�� �Է� �޾Ƽ� ���(A, B, C, D, E)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//(A : 100-80, B: 79-60, C: 59-40, D: 39-20, E: 19-0)

//--------------------------
	int a;
	printf("������ �Է��ϼ���");
	scanf_s("%d", &a);
	

	if (100>=a && a>=80){ 
		printf("A\n");}
	
	else if (79>=a && a>=60)
		printf("B\n"); 

	else if (59>=a && a>=40)
		printf("C\n");

	else if (39>=a && a>=20)
		printf("D\n"); 

	else if (19>=a && a>=0)
		printf("E\n"); 
	
	
	

//-----------------------------------
	return 0;
}