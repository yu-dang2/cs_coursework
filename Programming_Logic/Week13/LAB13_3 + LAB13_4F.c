//컴퓨터학과 20230837 허유정
#include <stdio.h>
#define SIZE 10

void selectionSort(int a[], int size);

int main(void){
    int odd[SIZE], even[SIZE];
    int num;
    int i;
    int oddIndex = 0;
    int evenIndex = 0;

    for(i = 0; i < SIZE; i++){
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num % 2 != 0){
            odd[oddIndex] = num;
            oddIndex++;
        }
        else{
            even[evenIndex] = num;
            evenIndex++;
        }
    }

    selectionSort(odd, oddIndex);
    selectionSort(even, evenIndex);

    printf("\n홀수 출력: ");
    for(i = 0; i < oddIndex; i++)
        printf("%d ", odd[i]);

    printf("\n짝수 출력: ");
    for(i = 0; i < evenIndex; i++)
        printf("%d ", even[i]);
    printf("\n");

    return 0;
}

void selectionSort(int a[], int size) {
    int i, j;
    int minIndex;
    int temp;

    for(i = 0; i < size - 1; i++) {
        minIndex = i;

        for(j = i + 1; j < size; j++) {
            if(a[j] < a[minIndex])
                minIndex = j;
        }

        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
    
    return;
}
