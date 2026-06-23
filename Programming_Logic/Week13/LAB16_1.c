//컴퓨터학과 20230837 허유정 
#include <stdio.h>

int main(void) {
	int table[5][3] = {0};
	int i, j;
	int total = 0; 
	
	printf("가)\n");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 3; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}
	
	printf("나)\n");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 3; j++){
			table[i][j] = i + j;
			printf("%d ", table[i][j]);
		}		
		printf("\n");
	}
	
	printf("다)\n");
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 3; j++)
			total += table[i][j];		
	}
	printf("Total is %d\n", total);
	
	return 0;
}
