//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	int num, i, j;
	int scores[20];
	
	printf("Enter the number of scores(<= 20): ");
	scanf("%d", &num);
	
	for(i = 0; i < num; i++){
		printf("Enter a score: ");
		scanf("%d", &scores[i]);
	}
	
	for(i = 0; i < num; i++){
		printf("Student %2d: ", i + 1);
		
		for(j = 0; j < scores[i]; j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
