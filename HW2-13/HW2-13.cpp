#include <stdio.h>
int main(){
	//13. month와 day를 입력 받아, 1월 1일부터의 총 day수를 출력하는 프로그램을 작성하시오. (switch문 사용) //1월 20일은 20일 출력, 2월 5일은 36일 출력. 단 2월은 28일로 계산.
	int month, day, a;
	printf("달과 날짜 입력 :");
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
	printf("지난 날짜수는 %d\n", a);
}

