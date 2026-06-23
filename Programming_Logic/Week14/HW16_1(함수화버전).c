//컴퓨터학과 20230837 허유정
#include <stdio.h>

void initTable (int t[][10], int size) {
	int i, j;
	
	for(i = 2; i <= size; i++) {
		for(j = 1; j <= size; j++)
			t[i][j] = i * j;
	}
	
	return;	
}

void printTimesTable (int t[][10], int size) {
	int i, j;
	
	for(i = 2; i <= size; i++) {
		for(j = 1; j <= size; j++)
			printf("%4d", t[i][j]);
		printf("\n");
	}
	
	return;
}

void printSelectTable (int t[][10], int n) {
	int j;
	
	for(j = 1; j <= 9; i++) 
		printf("%4d", t[n][j]);
	printf("\n");
	
	return;
}

int main() {
	int timesTable[10][10] = {0};
	int i, j;
	int n;
	
	initTable(timesTable, 9);
	printf("--구구단 표는 다음과 같습니다.\n");
	printTimesTable(timesTable, 9);

	printf("--원하는 구구단은? ");
	scanf("%d", &n);
	printSelectTable(timesTable, n);
	
	return 0;
}
