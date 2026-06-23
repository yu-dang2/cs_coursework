//컴퓨터학과 20230837 허유정
#include <stdio.h>

int main(){
	int num, digit;
	int new_num;
	int count = 0;
	
	scanf("%d", &num);
	scanf("%d", &digit);
	
	new_num = num * 3;
	
	while (new_num > 0){
		if(new_num % 10 == digit)
			count++;
		new_num /= 10;
	}
	printf("%d", count);
	
	return 0;
}
