#include <stdio.h>
#include<string.h>


void printArray (char* arr, int len){
	for(int index=0; index<len; index++){
		printf("array[%d] = %c \n", index, arr[index]);//array[%d] = %d \n"���� ����d�� c�� �ٲٸ� ���ڷ� ����
	}
}

int main(){
	char c;	//character(����)��
	//char�� ���� ������ �ǹ̺��ٴ� ������ �ǹ̷� ���̾���
	c='A';	//===> c = 65; �빮�� A�� ascii code���� ����
	printf("c=%d\n",c);	//%d�� �ƽ�Ű�ڵ� ���� ����
	printf("c=%c\n",c);	//%c�� �θ� c�� ��ǥ�� �Ǵ� �ƽ�Ű���ڰ� ���

	char a[] = {'h','e','l','l','o'};
	printArray(a,5);

	//���ڿ�(STRING)
	char b[] = "hello"; //==> char b[] = {'h', 'e', 'l', 'l', 'o', \0};
	printf("%s \n", b); //%s string�� ����Ʈ

	printf("the length of the string is %d \n", strlen(b));
	//strlen : string�� ����

	char str1[50] = "hello"; //��Ʈ�ʱ�
	char* str2 = " world";
	strcat(str1, str2);
	printf("%s \n", str1);

	strcpy(str1, str2);  //str2�� str1�� ���� (������� ����)
	printf("%s \n", str1);

	return 0;
}

