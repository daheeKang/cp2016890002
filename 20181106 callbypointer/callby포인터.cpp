#include <stdio.h>
//void test (int a){    //���� 2��
//	a=100;
//}
//
//int main(){
//	int a = 10;	//���Ⱑ6��
//	test(a);
//	printf("a=%d\n",a);
//
//	return 0;
//}




// ��Ʈ �ʱ� ����κ�
void test (int a){   
	a=100;
}

void testPointer(int* ptr){
	*ptr = 100;		//���Ⱑ 6��
}

int main(){
	int a = 10;
	test(a);
	printf("a=%d\n",a);	// �̰��� a�� *&a�� �ξ ���� �� (a�� �ּҰ� �ִ� ���� �� = �ᱹ a)
	//�����͸� �Ű����������� ����

	testPointer(&a);
	printf("a=%d\n", a);

	return 0;
}