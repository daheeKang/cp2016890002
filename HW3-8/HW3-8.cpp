#include <stdio.h>
//8. 배열의 최대값을 반환하는 함수

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
	int a[4] = {10, 120, 0, 40}; //배열을 오른쪽과 같이 지정해줍니다.
	int length = 4;

	printf("The max is %d\n", findMaxArray(a,length));

		return 0;
}

