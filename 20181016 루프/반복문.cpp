#include <stdio.h>
int main() {
	//==========================181016 �����մϴ�==========================

	//ctrl+] : matching parentheses -> ��ȣ �����°����� Ŀ���� �̵���
	// ctrl-a -> ��ü����
	// ctrl-k, ctrl-f : Format, �ҽ��ڵ� ���ÿ����� ���ڰ� �����Ѵ�. (�߿�)
	//ctrl-k, ctrl-c : Comment out, ������ ������ �ڸ�Ʈ�� ������
	//ctrl-k, ctrl-u : undo comment out, �ڸ�Ʈ�� �ٽ� �ȿ� ����
	//------------------------------------------------------------------
	//int count = 1;
	//while (count<=10) {		//��Ʈ ������ ����
	//	printf("count=%d\n", count);
	//	count = count+1;
	//}						//=> �ݺ��� (4���� �ϳ��� ����)


	int count = 1;	//�ִ��� �� �ڵ带 �ٿ�����
	while (count<=10)	
		printf("count=%d\n", count++);			// �����̸� �߰�ȣ�� �ʿ����



	// 1�������� 100���� 3�� ����� ȭ�鿡 ���
	count =1;
	while(count<=100){
		if (count%3 ==0)
			printf("count=%d\n", count);

		count++;
	}


	// 1�������� 100���� 3�� ����� ������ ������ ȭ�鿡 ���
	count =1;
	while(count<=100)
		if (count%3 ==0){
			printf("count=%d\n", count);
			count++;}		// ��ȣ�� count++�� ��� ���Ŀ� ���� �ٸ� (������ 3�� �κп� ��� �����Ŀ� ����)





		printf("\n���α׷����� ! \n");

		//========================������ �����Դϴ�========================
		return 0;
}