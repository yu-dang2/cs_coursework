//컴퓨터학과 20230837 허유정 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, i, j;
    int n[100];
    int min_idx, temp;
    
    srand(time(NULL));

	printf("Enter a number: ");
	scanf("%d", &num);

    for (i = 0; i < num; i++)
        n[i] = rand() % 100;

    for (i = 0; i < num - 1; i++) {
        min_idx = i;

        for (j = i + 1; j < num; j++) {
            if (n[j] < n[min_idx])
                min_idx = j;
        }

        if (min_idx != i) {
            temp = n[i];
            n[i] = n[min_idx];
            n[min_idx] = temp;
        }
    }

    for (i = 0; i < num; i++)
        printf("%d ", n[i]);
    printf("\n");

    return 0;
}
