#include <stdio.h>
int main() {
	//. 1���� 100������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(while�� ���)
	int count=1, sum=0;

	while(count<=100){
		if(count%3==0)  sum = sum+count;}

	count++;
	printf("sum is %d\n",count);
}
