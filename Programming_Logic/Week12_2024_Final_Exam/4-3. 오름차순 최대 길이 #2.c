#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int maxIncreasing2(int a[], int n) {
	int i;
	int current_len = 1;
	int max_len = 1;
	int current_start = 0;
	int max_start = 0;
	
	if (n <= 0) 
		return 0;
		
	if (n == 1) {
		printf("%d ", a[0]);
		return 1;
	}

	for (i = 0; i < n - 1; i++) {
		if (a[i] <= a[i + 1])
			current_len++;
		else {
			if (current_len > max_len) {
				max_len = current_len;
				max_start = current_start;
			}
			current_start = i + 1;
			current_len = 1;
		}
	}

	if (current_len > max_len) {
		max_len = current_len;
		max_start = current_start;
	}

	for (i = max_start; i < max_start + max_len; i++)
		printf("%d ", a[i]);
	printf("\n");

	return max_len;
}

int main(void) // 변경하지 말라
{
	int a[40];
	int i, n;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	printf("%d\n", maxIncreasing2(a, n));
	
	return 0;
}
