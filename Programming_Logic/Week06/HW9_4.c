//컴퓨터학과 20230837 허유정
#include <stdio.h>
int main(){
	int i;
	int n = 2;
	int prime = 1;
	
	do{
		for(i = 2; i <= n; i++){
			if(n % i == 0)
				break;
		}
		
		if(i == n){
			printf("%d번째 소수는 %d\n", prime, n);
			prime++;
		}
		n++;
	}while(prime <= 10);
	
	return 0;
}
