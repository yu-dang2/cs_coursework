//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	char word[11];
	int i;
	
	printf("Enter a word(<= 10 chars): ");
	scanf("%s", word);
	
	for(i = 0; i < 11; i++){
		if(word[i] == '\0')
			break;
			
		if(i % 2 == 0)
			printf("%c", word[i]);
	}
	
	return 0;
}
