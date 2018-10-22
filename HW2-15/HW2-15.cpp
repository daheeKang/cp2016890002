#include <stdio.h>
#include <stdlib.h>
int main(){
	//15. 1~100 사이의 숫자 하나를 정한 뒤(랜덤으로 생성해도 됨), 10번 이내로 그 숫자를 맞추는 게임을 작성하시오.(10번 이내로 못 맞추었을 경우는 약간 머리가 딸리는 사람이므로 Game Over 처리를 신랄하게 해 주기 바람)
	int a= rand() % 100; 
	int b, life=10;

	while(life>=1){

		printf("값을 맞춰보세요\n");
		scanf_s("%d",&b);



		if (a==b){ 
			printf("정답입니다!\n");
			break;
		}
		if (life==1) 
		{printf("Game Over\n");
		break;
		}

		if (a <b){
			printf("입력하신 값보다 작습니다.\n");
			life=life-1;
			continue;
		}
		if ( a> b){
			printf("입력하신 값보다 큽니다.\n");
			life=life-1;
			continue;
		}


	}
}