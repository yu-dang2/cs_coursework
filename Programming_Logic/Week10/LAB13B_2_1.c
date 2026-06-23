//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	char word[100];
	int i;
	
	printf("Enter one word: ");
    scanf("%s", word);
    
    for (i = 0; word[i] != '\0'; i++){
        if (word[i] >= 65 && word[i] <= 90) 
            printf("%c\n", word[i]);
    }
	
	return 0;
}
