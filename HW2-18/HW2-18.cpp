#include <stdio.h>
int main(){
	//18. 1���� 100���� 5�� ����� ���� for loop�� �Ἥ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int a, sum=0;
	for(a=1; a<=100; a=a+1){
		if(a%5==0){
			sum= sum+a;
		}
	}
	printf("�� ���� %d\n", sum);

}