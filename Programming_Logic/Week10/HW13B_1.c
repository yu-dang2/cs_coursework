//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	char word[81], newWord[81];
	int i;
	
	printf("Enter one word: ");
	scanf("%s", word);
	
	printf("word given: %s\n", word);
	printf("new word: ");
	
	for (i = 0; word[i] != '\0'; i++){
    	if (word[i] >= 65 && word[i] <= 90) 
            newWord[i] = word[i] + 32;
        
        else if (word[i] >= 97 && word[i] <= 122)
        	newWord[i] = word[i] - 32;
        
        else
        	newWord[i] = word[i];
    }
    printf("%s\n", newWord);
	
	return 0;
}
