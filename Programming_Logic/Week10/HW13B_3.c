//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	char word[81], newWord[81];
	int len = 0;
	int i;
	
	printf("Enter one word: ");
	scanf("%s", word);
	
	while(word[len] != '\0')
		len++;
	
	for(i = 0; i < len; i++)
		newWord[i] = word[len - 1 - i];
	
	printf("The reversed word is %s\n", newWord);
	
	return 0;
}
