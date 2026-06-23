//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int num, i;
	int sum = 0;
	
//	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++){
		if(num % i == 0)
			sum += i;
	}
	printf("%d", sum);
	
	return 0;
} 
