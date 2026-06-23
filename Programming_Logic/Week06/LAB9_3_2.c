//컴퓨터학과 20230837 허유정
#include <stdio.h> 
int main(){
	int score;
	int total = 0;
		
	while(1){
		printf("Enter a score(-1 for exit): ");
		scanf("%d", &score);

		if(score == -1)
			break;
		total += score;
	}
	printf("The total is %d.\n", total);
	
	return 0;
}
