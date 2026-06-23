//컴퓨터학과 20230837 허유정
#include <stdio.h>

void printSum1ToN(int a);

int main() {
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	printSum1ToN(n);
	
	return 0;
}

void printSum1ToN(int a) {
	int i, sum = 0;
	
	for(i = 1; i <= a; i++)
		sum += i;
		
	printf("1부터 %d의 합: %d\n", a, sum);
	
	return;
}
