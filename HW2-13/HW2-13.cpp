#include <stdio.h>
int main(){
	//13. month�� day�� �Է� �޾�, 1�� 1�Ϻ����� �� day���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (switch�� ���) //1�� 20���� 20�� ���, 2�� 5���� 36�� ���. �� 2���� 28�Ϸ� ���.
	int month, day, a;
	printf("�ް� ��¥ �Է� :");
	scanf_s("%d %d", &month ,&day);
	switch(month){
	case 1: a=0;
		break;

	case 2 : a=31;
		break;

	case 3 : a=31+28;
		break;

	case 4 : a=30+28+31;
		break;

	case 5 : a=30+28+31+30;
		break;

	case 6 : a=30+28+31+30+31;
		break;

	case 7: a=30+28+31+30+31+30;
		break;

	case 8: a=30+28+31+30+31+30+31;
		break;

	case 9: a=30+28+31+30+31+30+31+31;
		break;

	case 10: a=30+28+31+30+31+30+31+31+30;
		break;

	case 11: a=30+28+31+30+31+30+31+31+30+31;
		break;

	case 12: a=30+28+31+30+31+30+31+31+30+31+30;
		break;
	}
	a=a+day;
	printf("���� ��¥���� %d\n", a);
}

