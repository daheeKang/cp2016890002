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


	//int count = 1;	//최대한 위 코드를 줄여보면
	//while (count<=10)	
	//	printf("count=%d\n", count++);			// 한줄이면 중괄호도 필요없음



	////// 1에서부터 100까지 3의 배수만 화면에 출력
	//count =1;
	//while(count<=100){
	//	if (count%3 ==0)
	//		printf("count=%d\n", count);

	//	count++;
	//}


	//// 1에서부터 100까지 3의 배수를 제외한 정수만 화면에 출력(ㅇㄴ ㅠㅠ)
	//count =1;
	//while(count<=100)
	//	if (count%3 ==!0){
	//		printf("count=%d\n", count);
	// count++;} // 괄호로 count++을 어떻게 묶냐에 따라 다름 (순서도 3번 부분에 어떻게 들어가느냐에 따라)
	//	



	//키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램
	//위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다
	//int input;
	//while(1) {
	//	printf("정수를 입력하세요:");
	//	scanf("%d", &input);

	//	if(input==100) break; // break분기문
	//	if(input >= 1000) {
	//		printf("입력한 정수가 1000보다 큽니다. 다시 입력해 주세요\n");
	//			continue;
	//	}

	//	if (input%3==0)
	//		printf("입력한 정수 %d는 3의 배수입니다.\n", input);
	//	else printf("입력한 정수 %d는 3의 배수가 아닙니다.\n", input)
	//		;}



	// 1에서 100까지의 정수의 합을 구하시오
	int sum=0, i=1;
	while (i<=100) {
		sum=sum+i;
		i++;
	}
	printf("the sum is %d\n", sum);

	//위의 내용을 줄이면
	int sum=0, i=1;
	while (i<=100) {
		sum+= i++; //sum=sum+i++; 이라는 뜻
	}

	printf("the sum is %d\n", sum);
	// mmlab 구조적 프로그래밍 (입구는 하나, 출구는 여러개) - 우리가 하는 모든 프로그램이 구조적 프로그래밍

	// 유클리드 호제법 -> 숙제 또는 퀴즈 / 위키에 검색하면 나오는 코드 중 2번째꺼 보기 
	printf("\n프로그램종료 ! \n");

	//========================오늘은 마감입니다========================
	return 0;
}