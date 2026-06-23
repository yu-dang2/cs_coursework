//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int score, i;
	int best = -1;

	for(i=0; i<5; i++){
		printf("Enter a score: ");
		scanf("%d", &score);
		
		if(score > best)
			best = score;
	}
	printf("The best score is %d.", best);
	
	return 0;
}
