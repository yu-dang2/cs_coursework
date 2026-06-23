//컴퓨터학과 20230837 허유정
#include <stdio.h>

void printGradeTable (int g[][4], int size) {
	int i, j;
	
	for (i = 0; i < size; i++) {
		for (j = 0; j < 4; j++)
			printf("%4d", g[i][j]);
		printf("\n");
	}
	
	return;
}

void getStudentTotal (int g[][4], int size) {
	int i, j;
		
	for(i = 0; i < size - 1; i++) {
		for(j = 0; j < 3; j++)
			g[i][3] += g[i][j];
	}
	
	return;
}

void getExamTotal (int g[][4], int size) {
	int i, j;
	
	for(i = 0; i < size - 1; i++) {
		for(j = 0; j < 3; j++)
			g[4][j] += g[i][j];
	}
	
	return;
}

int main(void) {
	int gradeTable[5][4] = {{10, 15, 20, 0}, {30, 35, 20, 0},
	{60, 65, 20, 0}, {90, 95, 20, 0}, {0, 0, 0, 0}};
	int i, j;
	
	printf("a)\n");
	printGradeTable(gradeTable, 5);
	
	getStudentTotal(gradeTable, 5);
	getExamTotal(gradeTable, 5);
	
	printf("b)\n");
	printGradeTable(gradeTable, 5);
	
	return 0;
}
