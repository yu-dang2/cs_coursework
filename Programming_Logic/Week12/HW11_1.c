//컴퓨터학과 20230837 허유정 
#include <stdio.h>

int sumMToN(int m, int n);

int main(void) {
	printf("%d 부터 %d 까지의 합은 %d\n", 2, 5, sumMToN(2, 5));
	printf("%d 부터 %d 까지의 합은 %d\n", 3, 7, sumMToN(3, 7));
	printf("%d 부터 %d 까지의 합은 %d\n", 2, 10, sumMToN(2, 10));
	
	return 0;
}

int sumMToN(int m, int n) {
	return (m + n) * (n - m + 1) / 2;
}
