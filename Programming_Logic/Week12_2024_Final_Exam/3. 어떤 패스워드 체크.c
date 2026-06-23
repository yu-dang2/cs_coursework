#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPassword(char s1[], char s2[]) {
	int i = 0;
	int length = 0;

	for (i = 0; s2[i] != '\0'; i++)
		length++;
	
	for (i = 0; i < 4; i++) {
		if(s1[i] != s2[length - 4 + i])
			return 0;
	}
	
	return 1;
}

// 변경하지 말라
int main(void) {
	int i;
	char password[5];
	char inputPassword[20];

	scanf("%s", password);

	for (i = 0; i < 4; i++) {
		scanf("%s", inputPassword);
    	printf("%d\n", isPassword(password, inputPassword));
	}
}
