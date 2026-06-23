//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	char g;
	int s; 
	
	printf("Enter your grade: ");
	scanf("%c", &g);
	
	switch(g){
		case 'A':
			printf("Congratulation\n");
			break;
			
		case 'B':
			printf("Okay, try harder\n");
			break;
		
		case 'C':
			printf("Enter your score: ");
			scanf("%d", &s);
			printf("Try harder, you need to get %d next time\n", s + 10);
			break;
			
		case 'D':
		case 'F':
			printf("Sorry, you should take this course again\n");
			break;
			
		default:
			printf("Wrong grade\n");		
	}
	return 0;
} 
