//컴퓨터학과 20230837 허유정 
#include <stdio.h>
int main(){
	int n, i;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	i = 1;		
	while(i <= n){
		if(i % 3 == 0 || i % 5 == 0){
			printf("%d ", i);
			i++;
		}
	}
}
