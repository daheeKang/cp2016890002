//#include <stdio.h>
//
/////////////////////////////////////181204 ����ü//////////////////////////////////////
////����ü ���� : �پ��� �ڷ����� �������� ���ο� �ڷ����� �����ϴ� ����
////���� : ������� + ��Ұ��� ����
////����) ���Ҽ� -> �Ǽ���, �����
//
//
////////�������� �������. ���� �� ���׹��� ���ļ� �ʱ� �� ���Ӥ�
//
//
////����ü ���� : ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
//struct complex{ 
//	double real; //��� ����(member variable)
//	double imag; //��(ditto)
//}; //����ü ������ �ݵ�� �����ݷ����� �������Ѵ�.
//
//typedef struct complex Complex; //�ڷ��� "struct complex"�� ������ "Complex"��� �θ��ڴ�.
//
////���� �� ������ �ѹ������� �����
//typedef struct complex {
//	double real;
//	double imag;
//}Complex;
//
//
////������ Ÿ���� ���� ����
//typedef int myIntType; //�ڷ��� "int"�� ������ "mtIntType"��� �θ��ڴ�.
//
////�Լ� printComplex()
////�Է� : ���Ҽ�
////��� : ����
////�μ�ȿ�� : ����
//void printComplex(Complex* ptr){ //��� ���, ����ü�� �����͸� �Ű������� ���޹޴´�.
//	printf("%f + j%f\n", ptr->real, ptr->imag);
//}
//
////�Լ� conjugate()
////�Է� : ���Ҽ� (������)
////��� : ����
////�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ����Ҽ��� ��ȯ��
//void convertToConjugate(Complex* ptr){
//	ptr -> imag = -1* ptr-> imag;
//}
//
//	//void�� �ƴ϶� complex��
////�Լ� : returnConjugate()
////�Է� : ���Ҽ� ������
////��� : ���Ҽ� ����
//// �μ�ȿ�� : ����
//
//Complex* returnConjugate(Complex* ptr){
//	Complex temp;
//	temp.real = ptr -> real; temp.imag = -1*ptr -> imag;
//	return &temp;
//}
//	//?????????��� ������? - ����ο� -1�� ���Ѵ�
//
//int main(){ 
//	myIntType count = 10; //==> int count=10;
//	//����ü ��������(struct complex�� ������Ÿ��)
//	Complex a, b; //==> struct complex a;
//	
//		//����ü ������ ���� ����
//	//��κ� ����ü�� ������ ������ ����� ����
//	Complex* ptr;
//	a.real =10; //����ü������ ������� ���ٹ�� ==> ����ü�����̸�.��������̸�
//	a.imag = 20;
//	printComplex(&a);
//	ptr = returnConjugate(&a); printComplex(ptr);
//	//convertToConjugate(&a); printComplex(&a);
//
//
//	//����ü ������ ���� ����
//	//��κ� ����ü�� ������ ������ ����� ����
//	Complex* ptr;	 
//	//�̰� �߸��� ���ø� �˷��� �� !!!! main�Լ��� ����Ű�� ������ �̹� �Ҹ�� �����̾ �̻��� ���� ��µ�
//	ptr = &a;
//	ptr -> real = 100; //����ü �����ͺ����� ������� ���ٹ��(ȭ��ǥ�� ����) ==> ����ü �����̸� -> ��������̸�
//	ptr -> imag = 200;
//	//printComplex(&a);
//
//	return 0;
//}






#include <stdio.h>
#include <stdlib.h>




//����ü ���� : ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
//struct complex{ 
//	double real; //��� ����(member variable)
//	double imag; //��(ditto)
//}; //����ü ������ �ݵ�� �����ݷ����� �������Ѵ�.
//
//typedef struct complex Complex; //�ڷ��� "struct complex"�� ������ "Complex"��� �θ��ڴ�.

//���� �� ������ �ѹ������� �����
typedef struct complex {
	double real;
	double imag;
}Complex;


//������ Ÿ���� ���� ����
typedef int myIntType; //�ڷ��� "int"�� ������ "mtIntType"��� �θ��ڴ�.

//�Լ� printComplex()
//�Է� : ���Ҽ�
//��� : ����
//�μ�ȿ�� : ����
void printComplex(Complex* ptr){ //��� ���, ����ü�� �����͸� �Ű������� ���޹޴´�.
	printf("%f + j%f\n", ptr->real, ptr->imag);
}

//�Լ� conjugate()
//�Է� : ���Ҽ� (������)
//��� : ����
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ����Ҽ��� ��ȯ��
void convertToConjugate(Complex* ptr){
	ptr -> imag = -1* ptr-> imag;
}

	//void�� �ƴ϶� complex��
//�Լ� : returnConjugate()
//�Է� : ���Ҽ� ������
//��� : ���Ҽ� ����
// �μ�ȿ�� : ����

Complex* returnConjugate(Complex* ptr){
	Complex* tempPtr;
	tempPtr =(Complex*) malloc(sizeof(Complex)); //�����Ҵ�
	tempPtr -> real = ptr -> real; tempPtr -> imag = -1 * ptr -> imag;
	return tempPtr;
}
	//?????????��� ������? - ����ο� -1�� ���Ѵ�

int main(){ 
	myIntType count = 10; //==> int count=10;
	//����ü ��������(struct complex�� ������Ÿ��)
	Complex a, b; //==> struct complex a;
	
		//����ü ������ ���� ����
	//��κ� ����ü�� ������ ������ ����� ����
	Complex* ptr;
	a.real =10; //����ü������ ������� ���ٹ�� ==> ����ü�����̸�.��������̸�
	a.imag = 20;
	printComplex(&a);
	ptr = returnConjugate(&a); printComplex(ptr);
	//convertToConjugate(&a); printComplex(&a);
	free(ptr); printComplex(ptr);

	//����ü ������ ���� ����
	//��κ� ����ü�� ������ ������ ����� ����
	Complex* ptr;	 
	//�̰� �߸��� ���ø� �˷��� �� !!!! main�Լ��� ����Ű�� ������ �̹� �Ҹ�� �����̾ �̻��� ���� ��µ�
	ptr = &a;
	ptr -> real = 100; //����ü �����ͺ����� ������� ���ٹ��(ȭ��ǥ�� ����) ==> ����ü �����̸� -> ��������̸�
	ptr -> imag = 200;
	//printComplex(&a);

	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////�� ���� ���Ҽ��� �����ͷ� �޾Ƶ��� �� �Ǽ��� ����� ���� ���ؼ� ���� ����� ��ȯ�ϴ� ���α׷� ¥��///////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////