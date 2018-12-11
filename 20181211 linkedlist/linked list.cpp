


/////////구조체로 때려박기/////////////


#include <stdlib.h>
#include <stdio.h>

typedef struct node{
	int score;
	struct node* pNext; 
} Node;


typedef struct linkedlist{
	Node* pHead;
	Node* pTail;
	int nNode;
}LinkedList;


void printLL(LinkedList* pList){
	Node* ptr = pList -> pHead;
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

//함수 createNode() 
//입력 : 성적
//출력 : 노드하나를 동적할당으로 생성하여 포인터를 반환한다. 이 때 score=입력, pNext=NULL로 한다.
//부수효과 : 없음
Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr -> score = input;
	ptr -> pNext = NULL;
	return ptr;
}







///////////////요기주목//////////////////
//함수 addHead()
//입력 : 연결리스트 구조체 포인터(LikedList*), 새 노드 포인터
//출력 : 없음
// 부수효과 : 연결리스트 헤드에 새 노드를 추가

void addHead(LinkedList* pList, Node* pNewNode){
	if(pList -> pHead == NULL)
		pList -> pTail = pNewNode;
	pNewNode -> pNext = pList -> pHead; // #1 
	pList -> pHead = pNewNode; //#2
	(pList -> nNode)++;
}


int main(){
	LinkedList* pList;  //87
	pList = (LinkedList*) malloc(sizeof(LinkedList));
	pList -> pHead = pList -> pTail = NULL; pList -> nNode =0;
	addHead (pList, createNode(10)); //90
	addHead (pList, createNode(20));
	addHead (pList, createNode(30));
	addHead (pList, createNode(40));

	printLL(pList);
	return 0;
}


//헤드와 테일을 집어넣기 / 지우기 >>>>>>>>연습해서 오기 !!!!!!!!! 퀴즈에 나옴 !!!!!!!!!!!!!!!
