//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int arr[40];
	int num, i;
	int total = 0;
	int ave;
	
	printf("Enter the number of scores(0 < number <= 40): ");
	scanf("%d", &num);
	
	for(i = 0; i < num; i++){
		printf("Enter a score: ");
		scanf("%d", &arr[i]);
		total += arr[i];
	}
	printf("----------------------------------\n");
	
	ave = total / num;
	printf("Total: %d\n", total);
	printf("Average: %d\n", ave);
	for(i = 0; i < num; i++)
		printf("%d ", arr[i]);
	
	return 0;
} 
