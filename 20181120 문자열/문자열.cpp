#include <stdio.h>
#include<string.h>


void printArray (char* arr, int len){
	for(int index=0; index<len; index++){
		printf("array[%d] = %c \n", index, arr[index]);//array[%d] = %d \n"에서 뒤의d를 c로 바꾸면 문자로 나옴
	}
}

int main(){
	char c;	//character(문자)형
	//char를 쓰면 숫자의 의미보다는 문자의 의미로 많이쓰임
	c='A';	//===> c = 65; 대문자 A의 ascii code값이 저장
	printf("c=%d\n",c);	//%d는 아스키코드 값이 저장
	printf("c=%c\n",c);	//%c로 두면 c의 대표로 되는 아스키문자가 출력

	char a[] = {'h','e','l','l','o'};
	printArray(a,5);

	//문자열(STRING)
	char b[] = "hello"; //==> char b[] = {'h', 'e', 'l', 'l', 'o', \0};
	printf("%s \n", b); //%s string을 프린트

	printf("the length of the string is %d \n", strlen(b));
	//strlen : string의 길이

	char str1[50] = "hello"; //노트필기
	char* str2 = " world";
	strcat(str1, str2);
	printf("%s \n", str1);

	strcpy(str1, str2);  //str2를 str1에 복사 (덮어쓰기의 느낌)
	printf("%s \n", str1);

	return 0;
}

