#include <stdio.h>
int main(){
	//23.***** *
	//*** ***
	//* *****

	//를 출력하시오(반복문 써서!)

	int a;
	int b;

	for (a=5; a>=0; a-=2){
		for (b=0; b<6; b++){
			if (a==b) printf (" *");
			else printf ("*");
		}
		printf ("\n");
	}
}
