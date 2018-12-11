///////////다음시간에 시험 연결리스트 시험 4개/////////////
////////////순서도, 상태도 그릴 줄 알아야 함//////////////
/////////////mmlab에 있는 함수들 만들줄 알아야 함 ///////////////
////////////////백지에 함수 달달 외우기/////////
#include <stdlib.h>
#include <stdio.h>

typedef struct node{
	int score;
	struct node* pNext; 
} Node;

void printLL(Node* ptr){
	while(ptr != NULL){
		printf("score = %d\n", ptr->score);
		ptr=ptr->pNext;
	}
}

Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr -> score = input;
	ptr -> pNext = NULL;
	return ptr;
}

double averageLL(Node* ptr){
	int sum=0; int count=0;
	double average;
	while(ptr != NULL){
		sum += ptr -> score;
		count++;
		//printf("score = %d\n", ptr->score);
		ptr=ptr->pNext;
	}
	average = ((double) sum)/count;  //형변환
	return average;
}
//	double test;
//test = ((double)10.0)/4; //1.정수형(int) 10을 실수형 (double) 10.0으로 변환
////1.(10/4) -> 2를 반환, 2. 정수형 2를 double형 2.0으로 변환 //////// 1.(10.0/4) -> 2.5를 반환////// 1.double을 쓰면 형변환
//printf("test = %f\n", test);
//}



//함수 returnTail()
//입력 : 연결리스트 (연결리스트의 헤드노드 포인터)
//출력 : 마지막 노드의 포인터
//부수효과 : 없음
Node* returnTail(Node* ptr){
	if (ptr == NULL) //연결리스트에 노드가 없음
		return NULL;

	while(ptr != NULL){
		if(ptr -> pNext == NULL)
			return ptr;
		ptr = ptr -> pNext;
	}
}

//함수 addTail()
//입력 : 연결리스트, 추가하려는 노드 포인터
//출력 : 없음
//부수효과 : 추가하려는 노드가 연결리스트의 tail로 추가됨
void addTail(Node* pHead, Node* pNode){
	if(pHead == NULL){
		printf("error can't add a tail to empty linked list \n");
		return;
	}
	Node* pTail = returnTail(pHead);
	pTail -> pNext = pNode;
}

///////////퀴즈 볼 때 NULL일 때 pNext가 적용되는 것 조심할 것///////////////



void addHead(Node** ppHead, Node* pNewNode){
	pNewNode -> pNext = *ppHead; 
	*ppHead = pNewNode; 
}


int main(){
	Node* pHead = NULL, *ptr;
	pHead = createNode(11);
	ptr=createNode(20);
	addHead(&pHead, ptr);
	printLL(pHead);
	printf("average = %f\n", averageLL(pHead);)
}


//	double test;
//test = ((double)10.0)/4; //1.정수형(int) 10을 실수형 (double) 10.0으로 변환
////1.(10/4) -> 2를 반환, 2. 정수형 2를 double형 2.0으로 변환 //////// 1.(10.0/4) -> 2.5를 반환////// 1.double을 쓰면 형변환
//printf("test = %f\n", test);
//}