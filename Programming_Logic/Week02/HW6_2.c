//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(void){
	char g;
	int s; 
	
	printf("Enter your grade: ");
	scanf("%c", &g);
	
	if(g == 'A')
		printf("Congratulation");
	else if(g == 'B')
		printf("Okay, try harder");
	else if(g == 'C'){
		printf("Enter your score: ");
		scanf("%d", &s);
		printf("Try harder, you need to get %d next time", s + 10);
	}
	else if(g == 'D' || g == 'F')
		printf("Sorry, you should take this course again");
	else
		printf("Wrong grade");
} 
