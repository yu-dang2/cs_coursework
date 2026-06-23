//컴퓨터학과 20230837 허유정
#include <stdio.h>

void printFibo(int n);

int main(void) {
	int num, i;
	
	printf("몇개의 피보나치 수열값을 출력할까? (3보다 큰 정수): ");
	scanf("%d", &num);
	
	for (i = 0; i < num; i++)
		printFibo(i);
	printf("\n");
	
	return 0;
}

void printFibo(int n) {
	int f1 = 1, f2 = 1;
	int i;
	int f3 = 0;
	
	if (n == 0 || n == 1) {
			printf("%d ", 1);
			return;
	}
	
	for (i = 2; i <= n; i++) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}	
	printf("%d ", f3);
	
	return;
}
