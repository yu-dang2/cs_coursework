//컴퓨터학과 20230837 허유정
#include<stdio.h>
int main(void){
	int n1, n2;
	
	printf("Enter the first number: ");
	scanf("%d", &n1);
	
	printf("Enter the second number: ");
	scanf("%d", &n2);
	
	printf("%d + %d = %d\n", n1, n2, n1+n2);
	printf("%d - %d = %d\n", n1, n2, n1-n2);
	printf("%d * %d = %d\n", n1, n2, n1*n2);
	printf("%d / %d = %d", n1, n2, n1/n2);	
}
