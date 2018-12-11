///////////�����ð��� ���� ���Ḯ��Ʈ ���� 4��/////////////
////////////������, ���µ� �׸� �� �˾ƾ� ��//////////////
/////////////mmlab�� �ִ� �Լ��� ������ �˾ƾ� �� ///////////////
////////////////������ �Լ� �޴� �ܿ��/////////
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
//test = ((double)10.0)/4; //1.������(int) 10�� �Ǽ��� (double) 10.0���� ��ȯ
////1.(10/4) -> 2�� ��ȯ, 2. ������ 2�� double�� 2.0���� ��ȯ //////// 1.(10.0/4) -> 2.5�� ��ȯ////// 1.double�� ���� ����ȯ
//printf("test = %f\n", test);
//}