//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int row, col;
	int i, j;
	
	printf("Enter the number of rows: ");
	scanf("%d", &row);
	
	printf("Enter the number of columns: ");
	scanf("%d", &col);
	
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++)
			printf("%d", i+1);
		printf("\n"); 
	}
	
	return 0;
} 
