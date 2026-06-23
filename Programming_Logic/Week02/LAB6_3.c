//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(void){
	char g;
	int s;
	
	printf("Enter your grade: ");
	scanf("%c", &g);
	
	if(g == 'A'){
		printf("Enter your score: ");
		scanf("%d", &s);
		
		printf("%d점이면 %c를 받는군요.", s, g);
	}	
} 
