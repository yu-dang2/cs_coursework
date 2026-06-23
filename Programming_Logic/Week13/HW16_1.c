//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main() {
	int timesTable[10][10] = {0};
	int i, j;
	int n;
	
	printf("--구구단 표는 다음과 같습니다.\n");
	for(i = 2; i <= 9; i++) {
		for(j = 1; j <= 9; j++) {
			timesTable[i][j] = i * j;
			printf("%3d ", timesTable[i][j]);		
		}
		printf("\n");
	}
	
	printf("--원하는 구구단은?");
	scanf("%d", &n);
	
	for(j = 1; j <= 9; j++) 
		printf("%d ", timesTable[n][j]);
	printf("\n");
	
	return 0;
}
