//컴퓨터학과 20230837 허유정 
#include <stdio.h>

void printSumMToN(int M, int N);

int main() {
	int m, n;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &m, &n);
	
	printSumMToN(m, n);
	
	return 0;
}

void printSumMToN(int M, int N) {
	int i, sum = 0;
	
	for(i = M; i <= N; i++)
		sum += i;
	printf("%d ~ %d의 합: %d", M, N, sum);
	
	return;
}
