//컴퓨터학과 20230837  
#include <stdio.h>
int main(){
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	switch (n){
		case 1:
			printf("Spring");
			break;
			
		case 2:
			printf("Summer");
			break;
			
		case 3:
			printf("Fall");
			break;
			
		case 4:
			printf("Winter");
			break;
		
		default:
			printf("Invalid number");
			break;
	}
}
