#include <stdio.h>
int main(){

int m,n,r,g;

printf("�� ������ �Է��ϼ��� :");
	scanf_s("%d %d", &m, &n);
	g= m*n;
	for (; r=m%n; n=r, m=n){
	/*if(r==0) break;*/
	}
	printf("�ִ�����%d �ּҰ����%d\n", n, g/n);
}

int main ()

{

int num;

int value1 = 0, value2 = 1;

int printValue = 0;

int cnt = 0;




printf("�� �ױ��� ����Ϸ��ϴ°�(0�̻��� ��) : ");

scanf("%d", &num);




while(cnt != num){

printf("%d ", printValue); // ��µ� ��

printValue = value2; //�ι�° value ���� ����ϱ� ����

value2 += value1; // �ι�° ���� ù��° ���� ���Ѵ�

value1 = printValue; // ù��° ���� �ι�° ���� �����Ѵ�.

cnt++;

}




return 0;

}
