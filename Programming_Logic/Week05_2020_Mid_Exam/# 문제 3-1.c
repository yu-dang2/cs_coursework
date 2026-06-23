//컴퓨터학과 20230837 허유정
#include <stdio.h>
 int main(){
 	int n, i, j;
 	int sum;
 	
 	printf("Enter a number: ");
 	scanf("%d", &n);
 	
 	for(i = 1; i <= n; i += 5){
	 	sum = 0;
	 	
 		for(j = 0; j < 5; j++)
 			sum += (i + j);
 		printf("%d - %d까지 합 = %d\n", i, i + 4, sum);
	 }
 	
 	return 0;
 }
