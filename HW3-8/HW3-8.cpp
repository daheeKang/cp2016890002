#include <stdio.h>
//8. �迭�� �ִ밪�� ��ȯ�ϴ� �Լ�

int findMaxArray(int a[], int length){
	int index = 0;
	int max = 0;
	while(index < length ){
		if(a[index]>max){
			max = a[index];}
		index++;
	}
	return max;

}

int main(){
	int a[4] = {10, 120, 0, 40}; //�迭�� �����ʰ� ���� �������ݴϴ�.
	int length = 4;

	printf("The max is %d\n", findMaxArray(a,length));

		return 0;
}

