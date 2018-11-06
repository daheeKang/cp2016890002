#include <stdio.h>
//10. 배열의 두 인덱스 값을 교환하는 함수

// 포인터 배운 후에 다시해야합니당

int transIndex(int a[], int index1, int index2, int length){
	int n , m;
	int index=0;
	n=a[index1];
	m=a[index2];

	a[index1]=m;
	a[index2]=n;

	int count = 0;
	while(count < length ) { 
		printf("a[%d]=%d\n", count, a[count]); 
		count++;
	}
	return 0;
}


int main(){
	int a[8] = {0,1,2,3,4,5,6,7}; //배열을 오른쪽과 같이 지정해줍니다.
	int length = 8;
	//인덱스는 0부터 시작합니다.

	int index1, index2;	
	printf("인덱스를 교환할 두 요소의 인덱스를 입력하세요"); 
	scanf_s("%d %d", &index1 ,&index2);
	transIndex(a, index1, index2, length);
		return 0;
}
