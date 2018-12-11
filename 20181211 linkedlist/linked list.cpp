


/////////����ü�� �����ڱ�/////////////


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
	average = ((double) sum)/count;  //����ȯ
	return average;
}
//	double test;
//test = ((double)10.0)/4; //1.������(int) 10�� �Ǽ��� (double) 10.0���� ��ȯ
////1.(10/4) -> 2�� ��ȯ, 2. ������ 2�� double�� 2.0���� ��ȯ //////// 1.(10.0/4) -> 2.5�� ��ȯ////// 1.double�� ���� ����ȯ
//printf("test = %f\n", test);
//}



//�Լ� returnTail()
//�Է� : ���Ḯ��Ʈ (���Ḯ��Ʈ�� ����� ������)
//��� : ������ ����� ������
//�μ�ȿ�� : ����
Node* returnTail(Node* ptr){
	if (ptr == NULL) //���Ḯ��Ʈ�� ��尡 ����
		return NULL;

	while(ptr != NULL){
		if(ptr -> pNext == NULL)
			return ptr;
		ptr = ptr -> pNext;
	}
}

//�Լ� addTail()
//�Է� : ���Ḯ��Ʈ, �߰��Ϸ��� ��� ������
//��� : ����
//�μ�ȿ�� : �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���
void addTail(Node* pHead, Node* pNode){
	if(pHead == NULL){
		printf("error can't add a tail to empty linked list \n");
		return;
	}
	Node* pTail = returnTail(pHead);
	pTail -> pNext = pNode;
}

///////////���� �� �� NULL�� �� pNext�� ����Ǵ� �� ������ ��///////////////

//�Լ� createNode() 
//�Է� : ����
//��� : ����ϳ��� �����Ҵ����� �����Ͽ� �����͸� ��ȯ�Ѵ�. �� �� score=�Է�, pNext=NULL�� �Ѵ�.
//�μ�ȿ�� : ����
Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr -> score = input;
	ptr -> pNext = NULL;
	return ptr;
}







///////////////����ָ�//////////////////
//�Լ� addHead()
//�Է� : ���Ḯ��Ʈ ����ü ������(LikedList*), �� ��� ������
//��� : ����
// �μ�ȿ�� : ���Ḯ��Ʈ ��忡 �� ��带 �߰�

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


//���� ������ ����ֱ� / ����� >>>>>>>>�����ؼ� ���� !!!!!!!!! ��� ���� !!!!!!!!!!!!!!!
