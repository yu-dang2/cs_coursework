//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	int m, n, i;
	int prime;
	int count = 0, sum = 0;
	
	scanf("%d", &n);
	scanf("%d", &m);
	
	while(count < m){
		for(i = 2; i < n; i++){
			prime = 1;
			
			if(n % i == 0){
				prime = 0;
				break;
			}
		}
		if(prime == 1){
			sum += n;
			count++;
		}
		n++;
	}
	printf("%d", sum);
	
	return 0;
}
