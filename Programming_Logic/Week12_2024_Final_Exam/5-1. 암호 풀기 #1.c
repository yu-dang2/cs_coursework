#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int decodeStr(char s[], char s2[]) 
{
	int i = 0;
	int j = 0;
	int k;
	int repeat = 0;

	while (s[i] != '\0') {
		if (s[i] >= '0' && s[i] <= '9') {
			repeat = s[i] - '0';
			i++;
		}
		else {
			if (repeat == 0)
				repeat = 1;

			for (k = 0; k < repeat; k++) {
				s2[j] = s[i];
				j++;
			}
			repeat = 0;
			i++;
		}
	}
	s2[j] = '\0';

	return j;
}

int main(void) // 변경하지 말라
{
	char s[30], s2[300];
	
	scanf("%s", s);
	
	printf("%d ", decodeStr(s, s2));
	printf("%s\n", s2);

	return 0;
}
