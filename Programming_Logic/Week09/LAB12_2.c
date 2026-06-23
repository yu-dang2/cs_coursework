//컴퓨터학과 20230837 허유정
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int arr[10];
	int i, ave;
	int total = 0;
	
	srand(time(NULL));
	
	for(i = 0; i < 10; i++)
		arr[i] = rand() % 100;
	
	for(i = 0; i < 10; i++)
		total += arr[i];
	
	ave = total / 10;
	printf("평균은 %d\n", ave);

	for(i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}
