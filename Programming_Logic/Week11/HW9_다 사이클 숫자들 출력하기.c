//컴퓨터학과 20230837 허유정 
#include <stdio.h>

void cycleNb(int n);

int main(void) {
	int n;
	
	printf("Enter a number:");
	scanf("%d", &n);
	
	cycleNb(n);
}

void cycleNb(int num) {
	int count = 1;
	
	printf("%d ", num);

	while(num != 1){
		if(num % 2 == 0){
			num = num / 2;
			printf("%d ", num);						
		}
		else{
			num = num * 3 + 1;
			printf("%d ", num);			
		}
		count++;
	}
	printf("\n");
	printf("길이는 %d", count);

	return;
}
