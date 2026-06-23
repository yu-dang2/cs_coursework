//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(void){
	char g;
	int s; 
	
	printf("Enter a student grade(A or F): ");
	scanf("%c", &g);
	
	if(g == 'A'){
		printf("Enter your GOOD score: ");
		scanf("%d", &s);
		printf("점수가 %d점이면 좋은 성적을 맞는군요. 계속 열심히해요.", s);
	}
	else{
		printf("Enter your BAD score: ");
		scanf("%d", &s);
		printf("점수가 %d점이라니 더 열심히 해야겠네요.", s);
	}
} 
