#include <stdio.h>
int main(){
	//7. 0�� �Էµ� ������ ��� ������ �Է� �ް�, �Էµ� ��� ���ڵ��� ������ ����Ͻÿ�.

	int a=1, sum=0;
	while(1)
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &a);
		sum=sum+a;
		if(a==0) break;
	}
	printf("������ �� ���� %d\n",sum);

}