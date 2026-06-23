//컴퓨터학과 20230837 허유정 
#include <stdio.h>

int main(void) {
	char word[81];
	int num, total = 0, i;
	
	printf("Enter a word: ");
	scanf("%s", word);
	
	for (i = 0; word[i] != '\0'; i++) 
        if (word[i] >= '0' && word[i] <= '9')
            num = num * 10 + (word[i] - '0');
        else {
            total += num;
            num = 0; 
        }  
	total += num;	//마지막에 숫자가 오는 경우를 커버하기 위해 
	
	printf("%d\n", total);
	
	return 0;
}
