#include <stdio.h>
int main() {
	//==========================181016 오픈합니당==========================

	//ctrl+] : matching parentheses -> 괄호 닫히는곳으로 커서가 이동함
	// ctrl-a -> 전체선택
	// ctrl-k, ctrl-f : Format, 소스코드 선택영역을 예쁘게 포맷한다. (중요)
	//ctrl-k, ctrl-c : Comment out, 선택한 영역을 코멘트로 빼버림
	//ctrl-k, ctrl-u : undo comment out, 코멘트를 다시 안에 넣음
	//------------------------------------------------------------------
	//int count = 1;
	//while (count<=10) {		//노트 순서도 참고
	//	printf("count=%d\n", count);
	//	count = count+1;
	//}						//=> 반복문 (4줄이 하나의 문장)


	int count = 1;	//최대한 위 코드를 줄여보면
	while (count<=10)	
		printf("count=%d\n", count++);			// 한줄이면 중괄호도 필요없음



	// 1에서부터 100까지 3의 배수만 화면에 출력
	count =1;
	while(count<=100){
		if (count%3 ==0)
			printf("count=%d\n", count);

		count++;
	}


	// 1에서부터 100까지 3의 배수를 제외한 정수만 화면에 출력
	count =1;
	while(count<=100)
		if (count%3 ==0){
			printf("count=%d\n", count);
			count++;}		// 괄호로 count++을 어떻게 묶냐에 따라 다름 (순서도 3번 부분에 어떻게 들어가느냐에 따라)





		printf("\n프로그램종료 ! \n");

		//========================오늘은 마감입니다========================
		return 0;
}