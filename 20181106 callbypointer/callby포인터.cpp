#include <stdio.h>
//void test (int a){    //여기 2번
//	a=100;
//}
//
//int main(){
//	int a = 10;	//여기가6번
//	test(a);
//	printf("a=%d\n",a);
//
//	return 0;
//}




// 노트 필기 뒷장부분
void test (int a){   
	a=100;
}

void testPointer(int* ptr){
	*ptr = 100;		//여기가 6번
}

int main(){
	int a = 10;
	test(a);
	printf("a=%d\n",a);	// 이곳의 a를 *&a로 두어도 같은 값 (a의 주소가 있는 곳의 값 = 결국 a)
	//포인터를 매개변수값으로 전달

	testPointer(&a);
	printf("a=%d\n", a);

	return 0;
}