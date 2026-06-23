//컴퓨터학과 20230837 허유정 
#include <stdio.h>

int pow(int a, int b);

int main(void) {
	int x, y;
	
	printf("Enter the number X: ");
	scanf("%d", &x);
	
	printf("Enter the number Y: ");
	scanf("%d", &y);
	
	printf("%d ^ %d == %d\n", x, y, pow(x, y));
	
	return 0;
}

int pow(int a, int b) {
	int i, power = 1;
	
	for(i = 0; i < b; i++)
		power *= a;
		
	return power;
}
