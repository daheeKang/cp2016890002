#include <stdio.h>
int main(){
	//4. 1���� 100������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(for�� ���)
	int count, sum;
	for( count=1, sum=0; count<=100; count=count+1){
		if (count%3==0) sum=sum+count;
	}

		printf("sum is%d\n", sum);
}
