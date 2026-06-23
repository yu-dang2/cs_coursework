//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	int data[20];
	int num, i;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(i = 0; i < 20; i++)
		data[i] = num * (i + 1);
	
	for(i = 0; i < 20; i++){
		printf("%5d ", data[i]);
		
		if((i + 1) % 5 == 0)	//i % 5 == 4
			printf("\n");
	}
	
	return 0;
}
