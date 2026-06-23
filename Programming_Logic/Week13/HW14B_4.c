//컴퓨터학과 20230837 허유정 
#include <stdio.h>

int calculatePoint(char s[]);

int main(void) {
	char str[20];
	
	printf("단어를 입력하세요(빈칸없이): "); 
	scanf("%s", str);
	
	printf("점수는 %d\n", calculatePoint(str));
	
	return 0; 
}

// calculatePoint 함수의 정의
int calculatePoint(char s[]) {
	int i;
    int sum = 0;

    for(i = 0; s[i] != '\0'; i++) {
    	if(s[i] >= 'A' && s[i] <= 'Z')
    		sum += s[i] - 'A' + 1;
		else if (s[i] >= 'a' && s[i] <= 'z')
			sum += s[i] - 'a' + 1;		
    }

    return sum;
}
