//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	int incomes[7];
	int i;
	int best = -1;
	int bestIndex;
	int total = 0;
	double ave;
	
	for(i = 0; i < 7; i++){
		printf("Enter the income of day %d: ", i + 1);
		scanf("%d", &incomes[i]);
	}
	printf("----------------------------------\n");
	
	for(i = 0; i < 7; i++){
		if(incomes[i] > best){
			best = incomes[i];
			bestIndex = i + 1;
		}
	}
	printf("The best income: %d in day %d\n", best, bestIndex);
	printf("----------------------------------\n");
	
	for(i = 0; i < 7; i++)
		total += incomes[i];	
	ave = (double)total / 7;
	
	printf("The total is %d\n", total);
	printf("The average is %.1f\n", ave);
	printf("The good days and their incomes are\n");
	
	for(i = 0; i < 7; i++){
		if(incomes[i] > ave)
			printf("day %d: %d\n", i + 1, incomes[i]);
	}

	return 0;
}
