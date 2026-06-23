#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이 함수를 정의
int isIncreasing(int a[], int n) {
	int i;
	int isIn = 1;
	
	for (i = 0; i < n - 1; i++) {
		if(a[i] <= a[i + 1])
			isIn++;
	}
	
	if(n == isIn)
		return 1;
	else
		return 0;
}

// 변경하지 말라
int main(void) {
	int a[40];
	int n, k, i;
  
	scanf("%d", &n);
  
	for (k = 0; k < 4; k++) {
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		printf("%d\n", isIncreasing(a, n));
  	}
}

