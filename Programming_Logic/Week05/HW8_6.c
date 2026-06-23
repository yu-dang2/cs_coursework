//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	long long num, fac = 1;
	int i;
	
	printf("Enter a number: ");
	scanf("%lld", &num);
	
	for(i=1; i<=num; i++){
		fac *= i;
		printf("%d! = %lld\n", i, fac);
	}
	
	return 0;
}
