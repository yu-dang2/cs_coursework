//컴퓨터학과 20230837 허유정 
#include <stdio.h>

int pow(int a, int b);

int main(void) {
	int i;
	
	for(i = 0; i <= 10; i++)
		printf("%d ^ %2d == %d\n", 5, i, pow(5, i));

	return 0;
}

int pow(int a, int b) {
	int i, power = 1;
	
	for(i = 0; i < b; i++)
		power *= a;
		
	return power;
}
