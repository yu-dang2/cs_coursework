//컴퓨터학과 20230837 허유정
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int num1, num2, answer;
	
	srand(time(NULL));
	num1 = rand() % 100;
	num2 = rand() % 100;
	
	printf("%d + %d = ", num1, num2);
	scanf("%d", &answer);
	
	if(answer == num1 + num2)
		printf("Your answer is right.\n");
	else{
		printf("Your answer is wrong.\n");
		printf("%d is the right answer\n", num1 + num2);
	}

	return 0;
}
