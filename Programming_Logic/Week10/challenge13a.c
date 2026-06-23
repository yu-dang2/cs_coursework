//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	char word1[81], word2[81];
	int i;
	int same;
	
	printf("Enter the first word: ");
	scanf("%s", word1);
	
	printf("Enter the second word: ");
	scanf("%s", word2);
	
	same = 1;
	for (i = 0; word1[i] != '\0' || word2[i] != '\0'; i++) {
		if (word1[i] != word2[i]) {
			same = 0;
			break;
		}
	}
	
	if (same)
		printf("두 단어는 같다\n");
	else
		printf("두 단어는 다르다\n");
	
	return 0; 
}
