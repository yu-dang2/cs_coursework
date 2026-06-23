//컴퓨터학과 20230837 허유정 
#include <stdio.h>
int main(void){
	int b, h, a;
	
	printf("밑변과 높이를 입력하세요: ");
	scanf("%d %d", &b, &h);
	
	a = b * h / 2;
	printf("밑변과 높이가 각각 %d와 %d인 삼각형의 넓이는 %d이다", b, h, a); 
}
