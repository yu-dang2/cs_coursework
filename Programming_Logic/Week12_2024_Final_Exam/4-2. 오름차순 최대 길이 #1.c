#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int maxIncreasing(int a[], int n) {
	int i;
	int current_len = 1;
	int max_len = 1;

	for (i = 0; i < n - 1; i++) {
		if (a[i] <= a[i + 1]) 
			current_len++;
		else {
			if (current_len > max_len)
				max_len = current_len;
			current_len = 1;
		}
	}

	if (current_len > max_len)
		max_len = current_len;

	return max_len;
}

int main(void) // 변경하지 말라
{
	int a[40];
	int i;
	int n;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("%d\n", maxIncreasing(a, n));
	
	return 0;
}
