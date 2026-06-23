//컴퓨터학과 20230837 허유정
#include <stdio.h>

void print_divisor(int num);

int main() {
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	print_divisor(n);
	
	return 0;
}

void print_divisor(int num) {
	int i;
	
	for(i = 1; i <= num; i++) {
		if(num % i == 0)
			printf("%d\n", i);
	}
}
