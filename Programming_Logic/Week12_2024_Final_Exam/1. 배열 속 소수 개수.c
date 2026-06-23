#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a[100];
	int i, n, j;
	int count = 0;
	int isPrime;
	
	scanf("%d", &n);

	for (i = 0; i < n; i++)
    	scanf("%d", &a[i]);
    
	for (i = 0; i < n; i++) {
		isPrime = 1;
			
		if(a[i] <= 1)
			continue;

		for(j = 2; j < a[i]; j++) {
			if(a[i] % j == 0) {
				isPrime = 0;
				break;				
			}
		}
		if(isPrime)
			count++;
	}
	printf("%d\n", count);
	
	for(i = 0; i < n; i++)
		printf("%d ", a[i]);
			
	return 0;
}
