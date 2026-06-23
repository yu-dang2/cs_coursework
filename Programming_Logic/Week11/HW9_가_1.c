//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main() {
	int n, i, j;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		printf(" ");
		
		for(j = n; j > i; j--)
			printf("*");
		printf("\n");
	}

	return 0;
}
