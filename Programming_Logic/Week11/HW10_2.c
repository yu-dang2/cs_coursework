//컴퓨터학과 20230837 허유정 
#include <stdio.h>

void findNPrintBiggest(int a, int b, int c);

int main(void) {
	int num1, num2, num3;
	
	printf("Enter three numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	findNPrintBiggest(num1, num2, num3);
	
	return 0;
}

void findNPrintBiggest(int a, int b, int c) {
	int big = a;

    if (b > big)
        big = b;
        
    if (c > big)
        big = c;
	
	printf("The Biggest number is %d\n", big);
	
	return;			
}
