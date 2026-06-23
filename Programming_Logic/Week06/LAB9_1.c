//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int height;
	char ch;
		
	do{
		printf("Enter your height: ");
		scanf("%d", &height);
		printf("Your ideal weight is %d.\n", height - 110);
		
		while(getchar() != '\n');
		
		printf("Do you want to continue(y/n)? ");
		scanf("%c", &ch);		
	}while(ch == 'y');
	
	return 0;
} 
