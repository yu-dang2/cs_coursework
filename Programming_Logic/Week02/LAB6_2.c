//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(void){
	int w, h;
	
	printf("Enter your height: ");
	scanf("%d", &h);
	
	printf("Enter your weight: ");
	scanf("%d", &w);
	
	if(h <= w + 110)
		printf("You need a diet.\n");
	printf("BYE");	
}
