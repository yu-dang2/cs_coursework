//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	char word[81];
	int i, sum = 0;
	
	printf("Enter one word: ");
	scanf("%s", word);
	
	for(i = 0; word[i] != '\0'; i++){
		if (word[i] >= '0' && word[i] <= '9')
			sum += word[i] - 48;
	}
	printf("안에 있는 숫자들의 합은 %d\n", sum);
	
	return 0;
}
