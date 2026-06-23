//컴퓨터학과 20230837 허유정 
#include <stdio.h>

void printTable (int t[][3], int size) {
	int i, j;
	
	for(i = 0; i < size; i++) {
		for(j = 0; j < 3; j++)
			printf("%d ", t[i][j]);
		printf("\n");
	}
	
	return;
}

void initTable (int t[][3], int size) {
	int i, j;
	
	for(i = 0; i < size; i++) {
		for(j = 0; j < 3; j++)
			t[i][j] = i + j;
	}
	printf("\n");	
	
	return;
}
 
int calTotal (int t[][3], int size) {
	int i, j;
	int total = 0;
	
	printf("\n");	
	for(i = 0; i < size; i++) {
		for(j = 0; j < 3; j++)
			total += t[i][j];		
	}
	
	return total;
}

// Do not change
int main(void) {
	int table[5][3] = {0};
	
	printf("가\n");
	printTable(table, 5);
	initTable(table, 5);

	printf("나\n");
	printTable(table, 5);

	int total = calTotal(table, 5);
	printf("다\n");
	printf("Total is %d", total); 
}
