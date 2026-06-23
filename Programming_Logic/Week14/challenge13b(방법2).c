//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(void) {
	char word[81];
	int num = 0, total = 0, i;
	
	printf("Enter a word: ");
	scanf("%s", word);
	
	for (i = 0; word[i] != '\0'; i++) {
		num = 0;
		
        while (word[i] >= '0' && word[i] <= '9') {
            num = num * 10 + (word[i] - '0');
            i++;
        }
	   total += num; 
	}
	printf("%d\n", total);
	
	return 0;
}

