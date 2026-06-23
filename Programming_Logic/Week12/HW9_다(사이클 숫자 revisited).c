//컴퓨터학과 20230837 허유정 
#include <stdio.h>

int get_cycle_number(int n);

int main(void) {
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	while (n != -1) {
		printf("길이는 %d\n", get_cycle_number(n));

		printf("Enter a number: ");
		scanf("%d", &n);			
	} 
	
	return 0;
}

int get_cycle_number(int n) {
	int count = 1;
	
	printf("%d ", n);

	while(n != 1){
		if(n % 2 == 0){
			n /= 2;
			printf("%d ", n);						
		}
		else{
			n = n * 3 + 1;
			printf("%d ", n);			
		}
		count++;
	}
	printf("\n");

	return count;
}
