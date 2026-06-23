//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n, s, c;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	s = n * n;
	c = n * n * n;
	
	printf("The square number of %d is %d\n", n, s);
	printf("The cube number of %d is %d", n, c);
} 
