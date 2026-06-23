//컴퓨터학과 20230837 허유정 
#include <stdio.h>

void print5Stars(void);

int main(void) {
	print5Stars();
	print5Stars();
	print5Stars();
	
	return 0;
}

void print5Stars(void) {
	int i, num = 5;
	
	for (i = 0; i < num; i++)
		printf("*");
	printf("\n");
	
	return;
}
