#include <stdio.h>
int main(){
	//5. 1���� 100������ ����(����) �߿��� 3�� �����(3,6,9,12,..)���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.(do-while�� ���)

	int count=1, sum=0;
	do {
		if(count%3==0)  sum = sum+count;

		count= count+1;
	}
	while (count<=100);
	printf("sum is %d\n",sum);
	return 0;
}
