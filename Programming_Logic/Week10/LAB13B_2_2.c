//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	char word[81], newWord[81];					
	int i, j = 0;
	
	printf("Enter one word: ");
    scanf("%s", word);
    
    for (i = 0; word[i] != '\0'; i++){
        if (word[i] >= 65 && word[i] <= 90){
            newWord[j] = word[i];
            j++;
        }
    }
    printf("%s\n", newWord);
	
	return 0;
}
