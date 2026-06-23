//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n, i;
	int score;
	int best = -1, worst = 1000;
	
	printf("Enter the number of scores: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("Enter a score: ");
		scanf("%d", &score);
		
		if(score > best)
			best = score;
			
		if(score < worst)
			worst = score;	
	}
	
	if(n != 0){
		printf("The best score is %d\n", best);
		printf("The worst score is %d\n", worst);
	}
	else
		printf("no data.\n");
	
	return 0;
}
