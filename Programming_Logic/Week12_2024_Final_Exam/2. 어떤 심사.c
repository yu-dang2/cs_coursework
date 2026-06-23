#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a[20];
    int i, n;
    int max, min;
    int sum = 0;
    int ave = 0;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);    	
    	sum += a[i];
	}
	
	max = a[0];
	min = a[0];
	
	for (i = 1; i < n; i++) {		
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			min = a[i];
	}
	
	ave = (sum - min - max) / (n - 2);
	printf("%d", ave);
	
	return 0;		
}
