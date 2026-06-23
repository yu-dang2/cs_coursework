//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(void){
	int num, i;	
	int sum = 0, result = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	i = 1;
	while (i <= num){
		sum += 3;
		result *= 3;
		i++;
	}	
	printf("3 을 %d 번 더한 값은 %d 이다\n", num, sum);
	printf("3 을 %d 번 곱한 값은 %d 이다\n", num, result);
	
	return 0;
}
