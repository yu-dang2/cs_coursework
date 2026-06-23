//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n, i;
	int fac = 1;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%d! = ", n);
	
	i = n;
	while(i > 0){
		printf("%d * ", i);
		fac *= i;
		i--;
	}	 
	printf("= %d\n", fac);
	
	return 0;
} 
