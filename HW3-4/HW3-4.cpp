#include<stdio.h>
//4. ���� 3�� �� ���� ���� ������ ��ȯ�ϴ� �Լ�

int findMin(int a, int b, int c){
	int min=0;
	if (a>=b) { min= b;
	}
	if (a<b)  min=a;

	if(min>c){min=c;}
	return min;

}

int main(){
	int a, b, c; 
		printf("���� 3���� �Է��ϼ���");
	scanf_s("%d %d %d", &a ,&b ,&c);
	findMin(a, b, c);

	printf("The min is %d\n", findMin(a, b, c));
	return 0;
}