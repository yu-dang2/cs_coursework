//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int score;
	int total = 0;
	
	printf("Enter a score(-1 for exit): ");
	scanf("%d", &score);
	
	while(score != -1){
		total += score;
		
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);
	}
	printf("The total is %d.\n", total);
	
	return 0;
} 
