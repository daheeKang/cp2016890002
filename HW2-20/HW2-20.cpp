#include <stdio.h>
int main(){
	//20. 100 ������ �Ҽ��� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	int a=2, n;

	for(n=1; n<=100; n=n+1){
		for(a=2; a<n; a=a+1)
		{if ( n%a==0){ break;
		
		}
		}
		if(a==n) printf("%d\n",a);
	}

}
