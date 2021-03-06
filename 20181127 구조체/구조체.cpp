#include <stdio.h>

//프로그래밍 언어의 기능 - 1.컴퓨터의 기능 3가지(1.메모리접근, 2.연산 3.순서제어), 2. 요약화(1. 절차적 : 함수, 2. 선언적 : 구조체)

///////////////////////////////////181127 구조체//////////////////////////////////////
//구조체 정의 : 다양한 자료형의 조합으로 새로운 자료형을 정의하는 도구
//구조 : 구성요소 + 요소간의 관계
//예시) 복소수 -> 실수부, 허수부


//////오류있음 오류잡기. 뭔가 다 뒤죽박죽 아파서 필기 다 섞임ㄹ


//구조체 선언 : 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.
struct complex{ 
	double real; //멤버 변수(member variable)
	double imag; //상동(ditto)
}; //구조체 선언은 반드시 세미콜론으로 끝내야한다.

typedef struct complex Complex; //자료형 "struct complex"를 앞으로 "Complex"라고 부르겠다.

//위의 두 문장을 한문장으롤 만들면
typedef struct complex {
	double real;
	double imag;
}Complex;


//데이터 타입의 별명 선언
typedef int myIntType; //자료형 "int"를 앞으로 "mtIntType"라고도 부르겠다.

//함수 printComplex()
//입력 : 복소수
//출력 : 없음
//부수효과 : 없음
void printComplex(Complex* ptr){ //모든 경우, 구조체의 포인터를 매개변수로 전달받는다.
	printf("%f + j%f\n", ptr->real, ptr->imag);
}

//함수 conjugate()
//입력 : 복소수 (포인터)
//출력 : 없음
//부수효과 : 입력된 복소수가 켤레복소수로 변환됨
void convertToConjugate(Complex* ptr){
}
	//void가 아니라 complex로
//함수 : returnConjugate()
//입력 : 복소수 포인터
//출력 : 복소수 변수
// 부수효과 : 없음

Complex returnConjugate(Complex* ptr){
	Complex temp;
	temp.real = ptr -> real; temp.imag = -1*ptr -> imag;
	return &temp;

}


	//?????????어떻게 만들어야? - 허수부에 -1을 곱한다
	ptr -> imag = -1*ptr -> imag;
	return &temp;
}

int main(){ 
	myIntType count = 10; //==> int count=10;

	//구조체 변수선언(struct complex는 데이터타입)
	Complex a, b; //==> struct complex a; //여기가 30번
	
		//구조체 포인터 변수 선언
	//대부분 구조체는 포인터 변수를 사용해 접근
	Complex* ptr;

	a.real =10; //구조체변수의 멤버변수 접근방법 ==> 구조체변수이름.멤버변수이름
	a.imag = 20;

	printComplex(&a);
	b=convertToConjugate(&a); printComplex(&b);
	//convertToConjugate(&a); printComplex(&a);


	//구조체 포인터 변수 선언
	//대부분 구조체는 포인터 변수를 사용해 접근
	Complex* ptr;
	ptr = &a;
	ptr -> real = 100; //구조체 포인터변수의 멤버변수 접근방법(화살표로 접근) ==> 구조체 변수이름 -> 멤버변수이름

	ptr -> imag = 200;
	printComplex(&a);

	return 0;
}
