//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	int income[7];
	int i, best = -1;
	
	for(i = 0; i < 7; i++){
		printf("Enter the income: ");
		scanf("%d", &income[i]);
	}
	
	for(i = 0; i < 7; i++){				
		if(income[i] > best)
			best = income[i];
	}
	printf("----------------------------------\n");
	
	printf("The best income is %d\n", best);
	printf("Incomes are\n");
	for(i = 0; i < 7; i++)
		printf("%d ", income[i]);
	
	return 0;
}
