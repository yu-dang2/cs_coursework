//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int i, j;
	int answer;
	
	for(i = 1; i <= 9; i++){
		for(j = 2; j < 9; j += 2)
			printf("%d * %d = %d\t", i, j, i * j);
		printf("\n"); 
	}
	
	return 0;
}
