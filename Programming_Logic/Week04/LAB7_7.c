//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int n, i;
	int fac = 1;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	i = 1;
	while(i <= n){
		fac *= i;
		i++;
	}
	printf("%d 의 Factorial 값은 %d 이다.", n, fac);
}
