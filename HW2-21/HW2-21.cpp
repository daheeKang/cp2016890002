#include <stdio.h>
int main(){
	//21. ����ڷκ��� �� ���ڸ� �Է¹޾�, �Է¹��� ���� ������ �Ҽ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.


	int a, n,b ;
	int sum=0;

	printf("������ �Է��ϼ��� :");
	scanf_s("%d", &n);

	for(a=2; a<=n; a=a+1){
		for(b=2; b<=a; b=b+1)
		{
			if(a==b){sum=sum+a;
			}
			else if (a%b==0){
				break;
			}
		}
	}
	printf("%d\n",sum);


}