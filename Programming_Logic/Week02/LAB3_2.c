//컴퓨터학과 20230837 허유정
#include<stdio.h>
int main(void){
	int n, h, m;
	
	printf("Enter the total minutes: ");
	scanf("%d", &n);
	
	h = n / 60;
	m = n % 60;
	
	printf("%d minutes\n", n);
	printf("%dh %dm", h, m);
}
