#include <stdio.h>
//9. 배열의 최대값의 인덱스를 반환하는 함수

int findMaxArrayIndex(int a[], int length){
	int index = 0;
	int b=0;
	int max = 0;
	while(index < length ){
		if(a[index]>max){
			max = a[index];
			b = index;
		}
		index++;
	}
	return b;

}

//배열의 인덱스는 0부터 시작입니다.

int main(){
	int a[8] = {10, 4, 2,1,134, 120, 0, 40}; //배열을 오른쪽과 같이 지정해줍니다.
	int length = 8;

	printf("The max is %d\n", findMaxArrayIndex(a,length));

	return 0;
}