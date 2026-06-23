//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(void) {
    char word[81];
    int i;
    int sum = 0;
    int num = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for (i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 48 && word[i] <= 57)
            num = num * 10 + (word[i] - 48);
        else {
            sum += num;
            num = 0; 
        }
    }
    sum += num; 
    printf("글자 안의 수의 합은 %d\n", sum);

    return 0;
}
