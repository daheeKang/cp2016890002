#include <stdio.h>
#include <stdlib.h>
int main(){
	//15. 1~100 ������ ���� �ϳ��� ���� ��(�������� �����ص� ��), 10�� �̳��� �� ���ڸ� ���ߴ� ������ �ۼ��Ͻÿ�.(10�� �̳��� �� ���߾��� ���� �ణ �Ӹ��� ������ ����̹Ƿ� Game Over ó���� �Ŷ��ϰ� �� �ֱ� �ٶ�)
	int a= rand() % 100; 
	int b, life=10;

	while(life>=1){

		printf("���� ���纸����\n");
		scanf_s("%d",&b);



		if (a==b){ 
			printf("�����Դϴ�!\n");
			break;
		}
		if (life==1) 
		{printf("Game Over\n");
		break;
		}

		if (a <b){
			printf("�Է��Ͻ� ������ �۽��ϴ�.\n");
			life=life-1;
			continue;
		}
		if ( a> b){
			printf("�Է��Ͻ� ������ Ů�ϴ�.\n");
			life=life-1;
			continue;
		}


	}
}